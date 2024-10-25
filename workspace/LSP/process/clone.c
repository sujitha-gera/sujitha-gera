#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sched.h>
#include <signal.h>

int child_func(void *arg) {
    printf("Child process: PID = %d\n", getpid());
    return 0;
}

int main() {
    // Allocate memory for the child stack (1 MB)
    void *stack = malloc(1024 * 1024);
    if (stack == NULL) {
        perror("Failed to allocate stack");
        return 1;
    }

    pid_t pid = clone(child_func, (char *)stack + (1024 * 1024), 0, NULL); // No flags
    if (pid == -1) {
        perror("clone");
        free(stack);
        return 1;
    }

    printf("Parent process: PID = %d\n", getpid());
    waitpid(pid, NULL, 0);  // Wait for the child to finish
    free(stack);
    return 0;
}


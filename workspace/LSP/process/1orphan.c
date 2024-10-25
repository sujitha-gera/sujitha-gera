#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process
        sleep(2);  // Sleep for 2 seconds to ensure the parent exits first
        printf("Child process: PID = %d, Parent PID = %d\n", getpid(), getppid());
        exit(0);
    } else {
        // Parent process
        printf("Parent process: PID = %d\n", getpid());
        exit(0);  // Parent exits immediately
    }

    return 0;
}


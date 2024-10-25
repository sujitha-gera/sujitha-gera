#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_sigint(int sig) {
    printf("Caught SIGINT! Exiting...\n");
    exit(0);
}

int main() {
    // Set up the signal handler
    signal(SIGINT,handle_sigint);

    // Loop until interrupted
    while (1) {
        printf("Running... Press Ctrl+C to stop.\n");
        sleep(1);
    }

    return 0;
}


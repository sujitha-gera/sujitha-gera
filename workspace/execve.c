#include <stdio.h>
#include <unistd.h>
int main() {
       	char *argv[] = { "ls", "-l", NULL };//arguments for ls
        execve("/bin/ls",argv,NULL);
        perror("execve failed");
        return 0;
}


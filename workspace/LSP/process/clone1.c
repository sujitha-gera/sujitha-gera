#define _GNU_SOURCE

#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define STACK_SIZE 1024

int foo()
{
    printf( "|%d |%d |%d  |%d  |\n", getuid(), getgid(), getpid(), getppid() );
    exit( 1 );
}

int main()
{
    void* stack;
    stack = malloc( STACK_SIZE );
    if( !stack )
    {
        printf( "Stack alloc problem\n" );
        exit( 0 );
    }
    printf( "|UID    |GID    |PID    |PPID   |\n" );
    printf( "|%d |%d |%d  |%d  |Parent\n", getuid(), getgid(), getpid(), getppid() );

    int i = 0;
    for( ; i<3; i++ )
    {
        int err = clone( &foo, ( char * )stack + STACK_SIZE, CLONE_VM, 0 );
        if( err == -1 )
            perror( "clone error" );
    }
    free( stack );
    exit( 1 );
}

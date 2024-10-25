#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size;
    printf("Enter the number of characters you want to allocate: ");
    scanf("%d", &size);
    getchar(); // Clear the newline character left in the buffer
    char *p=(char*)malloc((size+1)*sizeof(char));
    printf("Enter a string: ");
    fgets(p,size+1,stdin);
//    scanf("%s", p);
    printf("String stored: %s\n", p);
}

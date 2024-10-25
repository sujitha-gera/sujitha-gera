#include<stdio.h>
void main()
{
    int const *p; // p points to an integer that is constant
    int a = 5;
    int b = 10;
    p = &a;  // p now points to a
    printf("%d\n",*p);
    // *p = 6; // Error: cannot modify the value of a through p
    p = &b;  // p can now point to b
    printf("%d\n",*p);
}

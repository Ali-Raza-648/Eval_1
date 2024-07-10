// #include<stdio.h>

// int main(void)
// {
//     int a = 2;
//     a = a << 2;

//     printf("a = %d", a);
// }

#include <stdio.h>
#include <string.h>

int main()
{
    int i = 10;

    printf("msb = %d", ffs(i));
    
    // int x = sizeof(i);
    // if (i & (1 << (8 * x)))
    // {
    //     printf("yes set\n");
    // }
    // else
    //     printf("not set\n");
    // return 0;
}
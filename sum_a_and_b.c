#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b)
{
    return a+b;
}
int main(int argc, char *argv[])
{
    if (3 != argc)
    {
        printf("num of param should be 2.\n");
        return -1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = sum(a, b);
    printf("sum of %d and %d is :%d\n", a, b, c);

    return 0;
}

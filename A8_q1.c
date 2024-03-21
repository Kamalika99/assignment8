#include<stdio.h>
void circularShift(int *a, int *b, int *c)
{
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int x = 5, y = 8, z = 10;
    circularShift(&x, &y, &z);
    printf("After circular shift: x=%d, y=%d, z=%d", x, y, z);
    return 0;
}
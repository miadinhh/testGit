#include <stdio.h>

int div(int x, int y) {
printf ("Enter number: ");
scanf ("%d%d", &x, &y);

int res = x - y;
printf ("Total = %d ", res);
}


int main()
{
    div();
    return 0;
}
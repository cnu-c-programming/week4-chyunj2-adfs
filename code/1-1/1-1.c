#include <stdio.h>
extern int foo(int x, int y);
int main()
{
    printf("%d\n", foo(1, 2));
    return 0;
}

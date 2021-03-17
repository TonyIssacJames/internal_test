#include <stdio.h>
#include "head_recursion.h"

void func1(int n)
{
    if(n > 0) //base condition
    {
        printf("%d, ",n);
        func1(n - 1);
    }
}


int head_recursion()
{
    int x = 3;

    func1(x);
}

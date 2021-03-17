#include <stdio.h>
#include "tail_recursion.h"



void func2(int n)
{
    if(n > 0) //base condition
    {
        func2(n - 1);
        printf("%d, ",n);
    }
}


int tail_recursion()
{
    int x = 3;

    func2(x);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int i;
    int func_count = 0;

    printf("Hello world!\n");
    printf("Start executing the code!\n");

    func_count = sizeof(recursion_algos)/sizeof(recursion_algos[0]);

    for(i = 0; i < func_count; i++)
    {
        printf("\n");
        (*recursion_algos[i])();
        printf("\n");
    }

    return 0;
}

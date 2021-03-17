#ifndef _MAIN_H
#define _MAIN_H

#include "head_recursion.h"
#include "tail_recursion.h"

/* Enable the MACRO for the code which you want to run*/

int (*recursion_algos[])(void) = {head_recursion, tail_recursion};

#endif // _MAIN_H

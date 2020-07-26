#include "business.h"
#include <stdio.h>
#include <stdlib.h>

#include "model/module.h"
#include "intelligent.h"
#include "./../utils/mystring.h"

void say_hello(void)
{
    printf("Hello world!\n");

    say_module();
    
    printf("智能算法: %d\n", my_add(1, 1));

    say_string();
}

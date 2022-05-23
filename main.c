#include <stdio.h>
#include "trim.h"

int main()
{
    char* str = "     Hello World     ";
    printf("%s", trim(str));
    printf("test\n");
    printf("%s", trim(" string "));
    printf("test\n");

    return 0;
}

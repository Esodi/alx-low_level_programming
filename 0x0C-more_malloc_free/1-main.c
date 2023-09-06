#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
    char *ptr = NULL;

    concat = string_nconcat(ptr, "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

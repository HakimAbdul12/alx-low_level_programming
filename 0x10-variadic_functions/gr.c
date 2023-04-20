#include <stdarg.h>  // for va_list, va_start, va_arg, va_end
#include <stdio.h>// for printf
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    // Initialize the variable argument list
    va_list args;
    va_start(args, n);

    // Loop through the arguments and print them with the separator
    for (unsigned int i = 0; i < n; i++) {
        int num = va_arg(args, int);
        printf("%d", num);
        if (separator != NULL && i < n - 1) {
            printf("%s", separator);
        }
    }

    // Clean up the variable argument list and print a new line
    va_end(args);
    printf("\n");
}


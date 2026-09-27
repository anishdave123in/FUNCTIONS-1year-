//create a varadic function to find whether the given integers are positive 
#include <iostream>
#include <cstdarg> 

bool areAllPositive(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        if (num <= 0) {
            va_end(args);
            return false;
        }
    }

    va_end(args);
    return true;
}
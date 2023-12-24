#include <stdio.h>  // Include header for printf()
#include <stdlib.h>
int main(){
    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;
    *y = 13;

    y = x;

    *y = 13;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[20], minimum, size, c;
    scanf("%d",&size);
    printf("%d\n", size);
    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);
    minimum = array[0];
    for ( c = 1 ; c < size ; c++ ) {
        if ( array[c] < minimum ) {
           minimum = array[c]; } }
    printf("it's value is %d.\n", minimum);
    return 0; }
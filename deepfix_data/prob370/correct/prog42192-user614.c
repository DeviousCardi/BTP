#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define Valid 1
#define Invalid 0
int main() {
    int a, b, c;
    a= 1;
    b=2 ;
    c= 3;
    if (a+b>c && b+c>a && c+a> b) {
       printf ("Valid\n") ; }
    else {
        printf ("Invalid\n"); }
    return 0; }
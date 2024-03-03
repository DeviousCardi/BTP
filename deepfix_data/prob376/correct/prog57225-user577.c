#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,no_test;
    scanf("%d",&no_test);
    int test[30];
    for(i=0; i<2*no_test; i++) {
        if(i%2==0)
        scanf("%d",&test[i/2]); }
    for(i=0;i<no_test; i++) {
        putchar(test[i]); }
	return 0; }
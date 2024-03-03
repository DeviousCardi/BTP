#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    long cat[18];
    cat[0]=1;
    for(i=1;i<18;i=i+1) {
        cat[i]=(4*cat[i-1])-(6*cat[i-1])/(i+2);
        printf("%ld",cat[i]); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    int x[a]; int w[b];
    i = 0; j =0;
    while(i<a) {
        x[i]=getchar();putchar(x[i]);
        i++; }
    while(j<b) {
        w[j]=getchar();
        j++; }
	return 0; }
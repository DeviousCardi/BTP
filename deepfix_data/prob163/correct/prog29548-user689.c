#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;int y = 1;int z = 1;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    int c;int h;int x[c];
    int d;int g;
    i = 0;g = 0; h = 0;
    scanf("%d\n",&c);
    scanf("%d\n",&d);
    while(c>0) {
        x[i] = (c%10);
        c = c/10;
        i++;
        printf("%d\n",x[i]); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;int y = 10;
    scanf("%d",&a);
    scanf("%d",&b);
    int c;int h;
    int d;int g;
    i = 0;g = 0; h = 0;
    scanf("%d",&c);
    while(i<a) {
        g = g + c%10;
        c = c/10;
        i++;
    }printf("%d\n",g);
    j = 0;y = 1;
    printf("%d",g+h);printf("%d",c);
	return 0; }
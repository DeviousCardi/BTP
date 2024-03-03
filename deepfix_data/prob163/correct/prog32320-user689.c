#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;int y = 1;
    scanf("%d",&a);
    scanf("%d",&b);
    int c;int h;
    int d;int g;
    i = 0;g = 0; h = 0;
    scanf("%d",&c);
    while(i<a) {
        while(j<a) {
            y = y*10;
            j++; }
        g = g + c%y;
    }printf("%d\n",g);
    j = 0;y = 1;
    printf("%d",g+h);printf("%d",c);
	return 0; }
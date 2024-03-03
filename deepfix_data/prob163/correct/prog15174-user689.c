#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;int y = 1;int z = 1;
    scanf("%d",&a);
    scanf("%d",&b);
    int c;int h;
    int d;int g;
    i = 0;g = 0; h = 0;
    scanf("%d",&c);
    scanf("%d",&d);
    while(i<a) {
        y = y*10;
        i++;
    }j = 0;
    while(j<b) {
        z = z*10;
        j++; }
    g = c%y;
    h = d%z;
    printf("%d",g+h);
	return 0; }
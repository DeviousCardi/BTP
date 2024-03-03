#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;int y = 1;
    scanf("%d",&a);
    scanf("%d",&b);
    int c[a];int h;
    int d[b];int g;
    i = 0;g = 0; h = 0;
    while(i<a) {
        scanf("%d",&c[i]);
        g = g + y*c[i];
        y = y*10;
        i++;
    }printf("%d\n",g);
    j = 0;y = 1;
    while(j<b) {
        scanf("%d",&d[j]);
        h = h + y*d[j];
         y = y*10;
        j++; }
    printf("%d",g+h);printf("%d",c[0]+d[0])
	return 0; }
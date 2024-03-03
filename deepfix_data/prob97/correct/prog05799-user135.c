#include <stdio.h>
#include <stdlib.h>
int main() {
    int h;
    int i,j,k,l;
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {printf("\n");
    for(k=1;k<=h-i;k++) {
        printf(" "); }
    for(j=k;j<(k+((2*i)-1));j++) {
    l=j%10;
    printf("%d",l); } }
	return 0; }
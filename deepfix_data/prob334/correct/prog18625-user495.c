#include <stdio.h>
#include <stdlib.h>
int main() {
	int b,h,i,j,k,m,l;
	scanf("%d",&h);
	scanf("%d",&b);
	m=b-2*(h-1);
	l=h-1;
    for(i=1;i<=h;i++) {
        for(j=1;j<=l;j++) {
            printf(" "); }
        for(k=i;k<=m;k++) {
            printf("%d",k%10); }
        printf("\n");
        m+=2;
        l--; }
	return 0; }
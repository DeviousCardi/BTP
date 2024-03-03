#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m;
	scanf("%d",&h);
    for(i=h;i>0;i=i-1) {
        for(j=i-1;j>0;j=j-1) {
            printf(" "); }
        m=i;
        for(k=1;k<=2*(h-i)+1;k++) {
            printf("m%10");
            m++; }
    printf("\n"); }
	return 0; }
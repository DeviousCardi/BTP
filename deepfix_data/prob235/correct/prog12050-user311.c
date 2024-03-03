#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m;
	scanf("%d",&h);
    for(i=h;i>0;i=i-1) {
        for(j=i-1;j>0;j=j-1) {
            printf(" "); }
        for(k=i;k>0;k=k-1) {
          m=i;
            for(l=1;l<2*i-1;l++) {
                printf("%d",m%10);
                m++; } } }
	return 0; }
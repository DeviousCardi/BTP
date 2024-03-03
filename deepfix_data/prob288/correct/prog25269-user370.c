#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,count,n;
    scanf("%d",&n);
    for(i=1;i<=n+1;i=i+1) {
        for(count=1;count<=n+1-i;count=count+1) {
               printf(" "); }
        for(j=1;j<=(i-1);j=j+1) {
               if((i+j)%2==0)
               printf("*");
               else
               printf("x"); }
        printf("\n"); }
	return 0; }
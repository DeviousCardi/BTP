#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,lenth,i,j,m;
	scanf("%d%d",&h,&lenth);
	int k = lenth - 2*(h-1);
	for(i=1;i<=h;i++) {
	       for(m=1;m<=(h-i);m++) {
	            printf(" "); }
	       for(j=i;j<=k;j++) {
	              printf("%d",j%10) ;
	              k=k+3; } }
		return 0; }
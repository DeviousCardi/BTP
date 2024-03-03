#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==1||n==0)
    return 1;
    else
    return ((2*(2*n-1)*cat(n-1))/((float)(n+1))); }
int main() {
	int t,k,j,count=0,p;
	scanf("%d",&t);
	while(count<t) {
	   scanf("%d",k);
       for(j=0;cat(j)<k;j++) {
         p=cat(j); }
	   printf("%d",p);
	   count++; }
	return 0; }
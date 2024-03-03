#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0 || n==1)
    return 1;
    else
	return ((2*n-1)*cat(n-1))/((float)(n+1)); }
int main()  {
    int t,k,count=0;
    scanf("%d",&t);
    while(count<t) {
        scanf("%d",&k);
        printf("%d\n",cat(k));
        count++; }
    return 0; }
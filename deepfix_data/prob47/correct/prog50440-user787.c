#include <stdio.h>
#include <stdlib.h>
int cat(int n){
if(n==0 || n==1)
return 1;
else
return cat(n-1)*((2*n-2)*(2*n-3))/(n*(n-1));}
int main() {
    int t,a[t-1],i,sum=0;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&a[i]);
        sum=sum+cat(a[i]);
        printf("%d\n",sum); }
	return 0; }
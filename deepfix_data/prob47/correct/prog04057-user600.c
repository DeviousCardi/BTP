#include <stdio.h>
#include <stdlib.h>
int cat(int n){
   long int s=0,i;
   if (n==0)
    return 1;
    else
    {for(i=0;i<n;i++){
        s=s+cat(i)*cat(n-i-1); }
    return s;} }
int main() {
	int i,j,t,k;
	long int sum=0;
	scanf("%d", &t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    for(j=0;j<=k-1;j++){
	        sum=sum+cat(k); }
    printf("%ld\n",sum);
	}	return 0; }
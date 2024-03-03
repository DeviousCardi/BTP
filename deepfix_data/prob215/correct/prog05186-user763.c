#include <stdio.h>
#include <stdlib.h>
int is_prime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
        return 0; }
    return 1; }
int main() {
	int i,j,s,n,divisor[10000],sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    if(n%i==0&&is_prime(i)==1)
	    {divisor[j]=i;
	    j++;}
	    sum=0;
	    for(j=0;j<n;j++){
	        sum=sum+divisor[j]; }
	    if(sum==n)
	    printf("YES");
	    else printf("NO"); }
	return 0; }
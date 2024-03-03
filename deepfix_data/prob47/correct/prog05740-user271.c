#include <stdio.h>
#include <stdlib.h>
int catalan(int n,int i){
int k=n-1;
    if (n==2)
    return (n+2)/2;
    else
    return catalan(n-1,i)*(n+i+k)/k; }
int main() {
    int i,t,j,sum=0,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        sum=sum+catalan(t,i); }
	printf("%d",t);
	return 0; }
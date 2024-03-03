#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
    return 1;
    else
    return (2*(2*n-1)/(n+1))*catalan(n-1); }
int main() {
    int i,t,j,n,sum=0;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
    scanf("%d",&n);
    for(j=0;j<n;j++){
        sum+=catalan(j); }
	printf("%d\n",sum);}
	return 0; }
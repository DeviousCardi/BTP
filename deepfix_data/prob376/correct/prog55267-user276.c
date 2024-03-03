#include <stdio.h>
#include <stdlib.h>
int catalan(n){
    if(n==0)
    return 1;
    else
    return (2*catalan(n-1)*(2*n-1))/(n+1); }
int main() {
    int i,j,cata=0,n,t;
    scanf("%d",&t);
    if(n==0)
    printf("0");
    for(i=0;i<t;i++)
    scanf("%d",&n);
    {  for(j=0;j<=n;j++){
        cata+=catalan(i);
        	printf("%d",cata);
    }cata=0;    }
	return 0; }
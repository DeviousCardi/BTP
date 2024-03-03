#include <stdio.h>
#include <stdlib.h>
int catalan(n){
    if(n==0)
    return 0;
    else
    return (2*catalan(n-1)*(2*n-1))/(n+1); }
int main() {
    int i,cata=0,n,t;
    scanf("%d",&t);
    if(n==0)
    printf("0");
    for(i=0;i<t;i++)
    scanf("%d",&n)
    {  for(j=0;j<=n;j++){
        cata+=catalan(i);
    }cata=0;    }
	printf("%d",cata);
	return 0; }
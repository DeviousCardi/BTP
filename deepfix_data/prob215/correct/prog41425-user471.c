#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,sum=0;
    scanf("%d",&n);
for(i=1; i<=n-1; i++)
    if(n%i==0){
    sum=sum+i; }
if(sum=n)
    printf("YES\n");
else
    printf("NO");
	return 0; }
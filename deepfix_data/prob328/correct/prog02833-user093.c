#include <stdio.h>
#include <stdlib.h>
int fabonacci(int n)
{if(n==1)
 return(0);
 if(n==2)
 return(1);
 else
 return(fabonacci(n-1)+fabonacci(n-2)); }
int main() {
	int t,k,i,j,f[20];
	for(i=0;i<20;i++)
	{f[i]=fabonacci(i+1); }
	scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d",&k);
    int c=0;
    for(j=0;j<20;j++){
    if(k==f[j]){printf("yes\n");
        c=1;
        break; } }
if(c==0){printf("no\n");}}
			return 0; }
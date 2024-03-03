#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,i,j;
	scanf("%d",&n);
	int num[n];
    for(i=0;i<n;i++) {
        scanf("%d\n",&num[i]); }
    scanf("%d",&t);
    int k;
    for(j=1;j<=t;j++) {
        scanf("%d",&k);
        if (k>0 && k<(n-1))
     {if (num[k]>num[k+1] && num[k]>num[k-1])
     {printf("Yes\n");}
     else
     {printf("No\n");} }
    else if (k==0)
    {if (num[k]>num[k+1])
    {printf("Yes\n");}
     else
     {printf("No\n");} }
     else if (k==(n-1))
     {if (num[k]>num[k-1])
    {printf("Yes\n");}
     else
     {printf("No\n");} } }
	return 0; }
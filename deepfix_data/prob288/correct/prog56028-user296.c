#include <stdio.h>
int main() {
int i,n,j;
scanf("%d",&n); {
for(i=1;i<=n;i=i+1) {
    for(j=i;j<=n;j=j+1)
    {if(j>i)
    {printf("*");}
    else
    {printf(" ");} }
    printf("\n"); } }
	return 0; }
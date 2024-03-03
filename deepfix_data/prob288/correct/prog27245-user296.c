#include <stdio.h>
int main() {
int i,n,j;
scanf("%d",&n); {
for(i=1;i<=n;i=i+1) {
    for(j=1;j<i+1;j=j+1)
    {if(j<i)
        printf(" ");
        else
        printf("*"); }
    printf("\n"); } }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,i,j=0,m=0;
	scanf("%d",&n);
for(j=0;j<n;j++)
{   t=n/2+1;
    if(j>n/2) {
        m++;
        m++; }
    for(i=1;i<=n;i++) {
    if((i>=t-j+m)&&(i<=(t+j-m))) {
    printf("m"); }
    else if(!(i>t))
    printf(" "); }
    printf("\n"); }
	return 0; }
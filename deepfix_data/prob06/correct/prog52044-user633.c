#include <stdio.h>
#include <stdlib.h>
int mod(int n)
{if(n<0)
    return(-1*n);
 else
    return n;
    return 0; }
int main() {
    int i,n,m,x,y,pos=0,diff,j,d;
	scanf("%d\t%d\t%d\t%d\n",&n,&m,&x,&y);
	int a[n],b[m];
	for(i=0;i<n;i++)
	    scanf("%d\t",&a[i]);
	printf("\n");
	for(i=0;i<m;j++)
	    scanf("%d\t",&b[i]);
	printf("\n");
    for(i=0,j=0;i<n,j<m;i++,j++)
       printf("%d%d\n",a[i],b[j]);
	return 0; }
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
    scanf("%d\t",&n);
    scanf("%d\t",&m);
    scanf("%d\t",&x);
    scanf("%d\n",&y);
	int a[n],b[m];
	for(i=0;i<n;i++)
	    scanf("%d\t",&a[i]);
	printf("\n");
	for(i=0;i<n;j++)
	    scanf("%d\t",&b[i]);
	printf("\n");
    for(i=0;i<n;i++)
       printf("%d\n",a[i]);
	return 0; }
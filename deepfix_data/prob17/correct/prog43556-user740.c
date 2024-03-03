#include <stdio.h>
int main() {
	int  a[20],b[20],i,j,n1,n2;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(j=0;j<n2;j++)
	scanf("%d",&b[i]);
	for(i=0;i<n1-n2;i++) {
	    if(a[i]==b[0])
	    break; }
	j=i-1;
	for(i=0;i<n2;i++)
	{if(b[i]!=a[j+i])
	    {printf("NO\n");
	    break;} }
	return 0; }
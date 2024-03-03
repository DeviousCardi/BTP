#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,count=0,w;
	scanf("%d\n",&n1);
	int a[n1];
	for(int i=0;i<n1;i++)
	scanf("%d\n",&a[i]);
	scanf("%d\n",&n2);
	int b[n2];
	for(int j=0;j<n2;j++)
	scanf("%d\n",&b[j]);
	int s;
	for(int k=0;k<n1;k++)
	{   s=a[k];
	    int y=a[k];
	    for(int x=k;x<n1;x++)
	    if(s>=a[x]) {
	        s=a[x];
	        w=x; }
	        a[k]=a[w];
	        a[w]=y; }
	for(int k=0;k<n2;k++)
	printf("%d ",a[k]); }
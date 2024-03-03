#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
	scanf("%d",&n);
	int a[n];
	int i,j,s,s1=0,c;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&s);
	for(i=0;i<n-1;i++)
	{c=0;
	    for(j=i+1;j<n;j++) {
	        s1=a[i]+a[j];
	        if(s1==s)
	        {c=1;
	        printf("(%d,%d)",a[i],a[j]); } }
	    if(c==1)
	    printf("\n"); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("\n%d",&n);
	int a[n],i;
	while(n>=20)
    {break;}
	for(i=0;i<n;i++)
	scanf("\n%d",&a[i]);
	int l;
	if (n==1)
	printf("Yes");
	else {
	for(i=0;i<n;i++) {
	    if(a[i]>a[i-1]&&a[i]>a[i+1])
	    l=1;
	    else if(a[i]==a[i-1] && a[i]>a[i+1])
	    l=1;
	    else if (a[i]>a[i-1] && a[i]==a[i+1])
	    l=1;
	    else
	    l=0;
	    if (i==n-1)
	    { if (a[i]>a[i-1])
	    l=1;} }
	if(l==1)
	    printf("Yes");
	else
	printf("No");}
	return 0; }
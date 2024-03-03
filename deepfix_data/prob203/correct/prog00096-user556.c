#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];int i,f=0,j;
	for( i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++)
	    {if(a[i]==a[j])
	    f=1;}
	    if(f==1)
	    break; }
	if(f==1)
	printf("YES");
	else
	printf("NO");
	return 0; }
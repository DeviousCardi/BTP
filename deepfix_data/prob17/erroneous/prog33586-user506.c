#include <stdio.h>
int main() {
	int n1,n2,i,k,f=0;
	scanf("%d",&n1);
	int a[n1];
	for(i=0;i<n1<i++)
	scanf("%d ",&a[i]);
	scanf("%d",&n2);
	int b[n2];
	for(i=0;i<n2;i++)
	scanf("%d ",&b[i]);
	for(i=0;i<(n1-n2);i++)
	    if(a[i]==b[0]) {
	        for(k=0;k<n2;k++)
	        if(a[i+k]=b[k])
	        f=f+1;
	        else {
	            f=0;
	            break; } }
	    printf("%d",f);
	return 0; }
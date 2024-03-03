#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10005],i,count,mode;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int maxcount=0;
	for(i=0;i<n;i++)
	{   count = 0;
	    for(j=0;j<n;j++) {
	        if(a[i]==a[j]) {
	            count++; } }
	    if(count>maxcount) {
	        maxcount = count;
	        mode=a[i]; } }
    printf("%d",mode);
return 0; }
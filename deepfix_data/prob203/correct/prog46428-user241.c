#include <stdio.h>
int main() {
	int a[100],n,i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        if(i==j)
	        continue;
	        if(i!=j&&a[i]==a[j])
	        count++; } }
	if(count==0)
	printf("NO");
	else
	printf("NO");
	return 0; }
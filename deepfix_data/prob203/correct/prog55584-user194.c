#include <stdio.h>
int main() {
	int a[50];
	int i,j,n,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++);
	    scanf("%d ",&a[i]);
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[j]==a[i])
	        x=x+1; } }
	if(x!=0)
	    printf("YES");
	else
	    printf("NO");
	return 0; }
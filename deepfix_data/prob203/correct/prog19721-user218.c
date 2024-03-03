#include <stdio.h>
int main() {
	int a[50],n,i,j,flag;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]==a[j])
	        flag=1;
	        printf("yes");
	        break; } }
	if(flag!=1)
	printf("no");
	return 0; }
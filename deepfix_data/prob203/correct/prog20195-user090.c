#include <stdio.h>
int main() {
	int n,i,j,flag=0;
	scanf("%d",&n);
	int a[50];
	for(i=0;i<n;i++)
	{flag=0 ;
	    for(j=i;j<n;j++) {
	        if(a[i]==a[j])
	        flag++;break; } }
	if(flag==0)
	printf("NO");
	else
	printf("YES");
	return 0; }
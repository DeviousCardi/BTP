#include <stdio.h>
int main() {
	int n,i,j,flag=0;
	scanf("%d",&n);
	int text[n];
	for(i=0;i<n;i++)
	    scanf("%d",&text[i]);
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        if(i!=j)
	            flag=flag+(text[i]==text[j]); } }
	if(flag==0)
	    printf("NO\n");
	else
	    printf("YES\n");
	return 0; }
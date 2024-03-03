#include <stdio.h>
int main() {
	int n,a[50],i,j,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	    for(j=n-1;j>i;j--){
	        if (a[i]==a[j]) c++;
	        if (c>0)break; }
	    if(c>0)break; }
	if(c>0)printf("YES\n");
	else printf("NO");
	return 0; }
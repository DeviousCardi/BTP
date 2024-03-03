#include <stdio.h>
int main() {
	int n,i,j,count=0;
	int a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
for(i=0;i<50;i++) {
	    for(j=0;j<50;j++) {
	        if((a[i]==a[j])&&(i=j))
	            continue;
	        else if((a[i]==a[j])&&(i!=j))
	            count++; } }
	if(count>0)
	    printf("YES\n");
	else
	    printf("NO\n");
return 0; }
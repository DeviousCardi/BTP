#include <stdio.h>
int main() {
	int a[21],b[21],i,j,t=0,n,m,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&m);
	for(j=0;j<m;j++) {
	    scanf("%d",&b[j]); }
	    for(i=0;i<n;i++) {
	        if(b[0]==a[i]);
	        printf("hurray");
	        break; }
	if(count==m)
	printf("YES");
	else
	printf("NO");
	return 0; }
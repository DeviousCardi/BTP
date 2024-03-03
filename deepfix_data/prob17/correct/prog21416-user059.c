#include <stdio.h>
int main() {
	int a[50],b[50],m,n,i,j,k,c=0;
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	scanf("%d ",&a[i]);
	scanf("\n%d",&n);
	for(j=0;j<n;j++)
	scanf("%d ",&b[i]);
	for(i=0;i<m;i++) {
	    if(a[i]==b[0]) {
	        for(j=1,k=i+1;j<n;k++,j++)
	        if(a[k]==b[j])
	        c++; } }
	if(c==n-1)
	printf("YES");
	else
	printf("NO");
	return 0; }
#include <stdio.h>
int main() {
	int n,m,a[20],b[20],cnt=0;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("\n%d",&m);
	for(int j=0;j<m;j++)
	scanf("\n%d",&b[j]);
	for(int j=0;j<m;j++) {
	    for(int i=0;i<n;i++) {
	        if(b[j]==a[i])
	        cnt++; } }
	 if(cnt==m)
	 printf("YES");
	 else
	 printf("NO");
	return 0; }
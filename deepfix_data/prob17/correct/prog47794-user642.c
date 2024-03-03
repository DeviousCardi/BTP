#include <stdio.h>
int main() {
	int i,k=0,j=0,a1[20],a2[20],n1,n2;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++)
	    scanf("%d",&a1[i]);
	scanf("\n%d\n",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]);
	for(j=j;j<n1;j++)
	    if(a1[j]==a2[i]) {
	        k=k+1;
	        break; } }
	if (k==n2) printf("YES");
	else printf("NO");
	return 0; }
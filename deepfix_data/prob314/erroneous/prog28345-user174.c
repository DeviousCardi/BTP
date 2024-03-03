#include <stdio.h>
#include <stdlib.h>
int checkmin(int b[],int c) {
    if(c==0 && b[c]<b[c+1])
    return 1;
    else if (c==(n-1)&& b[c]<b[c-1])
    return 1;
    else if (b[c]<b[c-1] && b[c]<b[c+1])
    return 1;
    else
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
	int i=0,t=0,j=0,ans=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for (i=1;i<=t;i++) {
	    scanf("%d",&j);
	    ans=checkmin(a,j);
	    if (ans)
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	return 0; }
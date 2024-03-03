#include <stdio.h>
#include <stdlib.h>
int ctln(int n)
{  int ans=0,i;
    if(n==0)
    return 1;
    for(i=0;i<n;i++) {
        ans=ans+ctln(i)*ctln(n-i-1); }
    return ans; }
int main() {
    int k;
    scanf("%d",&k);
    printf("%d",ctln(k));
	return 0; }
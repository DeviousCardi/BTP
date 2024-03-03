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
    int k,a=0,i,j,n;
    printf("%d",ctln(15));
	return 0; }
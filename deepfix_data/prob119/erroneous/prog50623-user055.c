#include <stdio.h>
#include <stdlib.h>
int moves (int k) {
 int j=1;
 if (k==0)
 return 0;
 else if (k==1)
 return 1;
 else
 return (2*moves (k-1)-1); }
int main() {
    int t,n,i;
    scanf("%d",&t);
    int a=1;
    for (i=1;i<=t;i++) {
        scanf("%d",&n);
        printf("%d\n", moves(n); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
 int B(int n) {
     if(n==0)
     return 1;
     else
     return (B(n-1)*(4*n+2))/(n+2); }
int main() {
    int i,j=0,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n); }
    while(B(j)<n) {
        j++; }
        printf("%d\n",B(j-1));
	return 0; }
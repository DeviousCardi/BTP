#include <stdio.h>
#include <stdlib.h>
int z=1;
int catalan( int n ,int k) {
    if (n==2) return 2;
    return (catalan(n,n+k-1)/catalan(n,k-1))*z ; }
int main() {
	int a,b,c;
       scanf("%d",&a);
       for(b=1;b<=a;b++) {
           scanf("%d",&c);
           if (c<0)
           printf("only whole numbers acceptable");
           if (c==1 || c==0)
           printf("1");
           else
           printf ("%d",catalan(c , c) ); }
	return 0; }
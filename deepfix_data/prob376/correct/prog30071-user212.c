#include <stdio.h>
#include <stdlib.h>
int C(int n){ if (n==0) return 1;
               if (n==1) return 1;
               int r,i,sum;
               sum=0;
               for(i=0;i<=n-1;i++){
                   r=C(i)*C(n-1-i);
                   sum=sum+r;}
                return sum; }
int main() { int t,n,i;
             scanf("%d\n",&t);
             for(i=0;i<t;i++){
                 scanf("%d\n",&n);
                 printf("%d\n",C(n)); }
	printf("%d",C(17));
	return 0; }
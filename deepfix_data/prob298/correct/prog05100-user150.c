#include <stdio.h>
#include <stdlib.h>
long int sum=0;
long int catalan(long int n) {
    int i;
    if (n==0||n==1)
    return 1;
    else
    return ((2*(2*n-1))/(n+1))*catalan(n-1); }
int main() {
   long int test,i,j,n,k=0,u;
   scanf("%ld\n",&test);
    for(i=0;i<=test-1;i++) {
        k=0;
        scanf("%ld\n",&n);
        for(j=0;j<=17;j++) {
            sum=0;
            u=catalan(j);
            if(n==u)
         {  k=1;break;}
         printf("%ld\t",u)   ; }
        if(k==1)
        printf("yes\n");
        else
        printf("no\n"); }
	return 0; }
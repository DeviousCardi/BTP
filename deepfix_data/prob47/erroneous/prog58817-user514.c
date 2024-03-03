#include <stdio.h>
#include <stdlib.h>
int Catalan(int n) {
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    else
    return 2*(2*(n-1)+1)*Catalan(n-1)/(n+1); }
int main()
    int n;
    int t,sum;
    int i,j,k=0;
    scan("%d",&t);
    int A[t];
    for(i=0;i<t;i=i+1) {
        scanf("%d\n",&A[i]); }
	for(i=0;i<t;i=i+1) {
	        sum=0;
	        for(j=0;j<A[i];j=j+1)
	            {sum=sum+Catalan(j);}
	            printf("%d\n",sum); }
	return 0; }
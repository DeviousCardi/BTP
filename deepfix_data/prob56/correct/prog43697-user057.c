#include <stdio.h>
#include <stdlib.h>
long catalan(int n) {
    int j;
    long sum=0;
    if(n<2)
    {return 1;}
    else {
        for(j=0;j<n;j++)
        sum=sum+(catalan(j)*catalan(n-j-1));
        return sum; } }
int main() {int i,t, k;int j;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    if(k==0)
	    printf("1\n");
	    for(j=1;j<=k;j++) {
	        if(k<catalan(j))
	        printf("%lu\n",catalan(j));
	          if(k==catalan(j))
	        printf("%lu\n",catalan(j+1)); } }
	return 0; }
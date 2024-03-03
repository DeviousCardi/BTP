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
int main() {int i,t, k;long a;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    a=catalan(k);
	    printf("%lu\n",a); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int j;
    int sum=0;
    if(n<2)
    {return 1;}
    else {
        for(j=0;j<n;j++) {
            sum=sum+(catalan(j)*catalan(n-j-1));
            return sum; } } }
int main() {int t,i,k,a;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    a=catalan(k+1);
	    printf("%d",a); }
	return 0; }
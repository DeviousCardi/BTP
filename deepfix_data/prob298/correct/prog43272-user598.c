#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0)
    return 1;
    else {
    for(i=0;i<n;i++)
     {sum=sum+catalan(i)*catalan(n-1-i);}
    return sum; } }
int main() {
	printf("%d",catalan(3));
	return 0; }
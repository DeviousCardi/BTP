#include <stdio.h>
#include <stdlib.h>
int catalan( int n)
{  int i,s;
    if (n<=1) return 1;
    for (i=0;i<n;i++)
    s= s + catalan(i)*catalan(n-i-1);
    return s; }
int main() {
	int a,b,n,c;
       scanf("%d",&a);
       for(b=1;b<=a;b++) {
           printf("%d\n",catalan(5)); }
	return 0; }
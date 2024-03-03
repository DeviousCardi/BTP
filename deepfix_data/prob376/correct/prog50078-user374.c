#include <stdio.h>
#include <stdlib.h>
int catalan(int a) {
    if(a==1 || a==0)
    return 1;
    else
    return ((2*(2*a-1)*catalan(a-1))/((float)(a+1))); }
int main() {
	int a,b,count=0,t;
	scanf("%d",&t);
	while(count<t) {
	    scanf("%d",&a);
	    b=catalan(a);
	    printf("%d\n",b);
	    count++; }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int fibonachi(int n) {
    if(n==1)
    {return 0;}
    else if(n==2){ return 1;}
    else
   { return fibonachi(n-1)+fibonachi(n-2);} }
int main() {
    int t,i,n;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d\n",fibonachi(n)); }
	return 0; }
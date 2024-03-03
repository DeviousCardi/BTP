#include <stdio.h>
#include <stdlib.h>
int f(int n) {
    if(n>1)
    return f(n-1)+f(n-2);
    else if(n==1)
    return 1;
    else if(n==0)
    return 0; }
int main() {
    int t,a[100],i;
    scanf("%d\n",&t);
    scanf("%d\n",a);
    for(i=0;i<t;i++) {
        printf("%d\n",f(a[i])); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int cat(int test,int p,int n) {
    if(p>test)
    return p;
    return cat(test,p*2*(2*(n+1))/(n+2),n+1); }
int main() {
    int t,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<t;i++) {
	    printf("%d\n",cat(a[i],1,2)); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    float p=1;
    while(n>0) {
        p=p*2*(n)/(n+1)/(n); }
    return (int)p; }
int cat(int test,int p,int n) {
    if(p>test)
    return p;
    return(fact(n)); }
int main() {
    int t,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<t;i++) {
	    printf("%d\n",cat(a[i],p,1)) }
	return 0; }
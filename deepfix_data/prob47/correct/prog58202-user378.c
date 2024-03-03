#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
    if (n<=1)
    return n;
    int i,res=0;
    for (i=0;i<=n;i++) {
        res=res+catalan(i)*catalan(n-i-2); }
    return res; }
int main() {
    int t;
    scanf ("%d",&t);
    int k[t],i;
    for (i=0;i<t;i++) {
        scanf ("%d\n",&k[i]); }
    int sum=0;
    for (i=0;i<t;i++) {
        sum=sum+catalan(k[i]); }
    printf ("%d\n",sum);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
    if (n<=1)
    return 1;
    int i,res=0;
    for (i=0;i<n;i++) {
        res=res+catalan(i)*catalan(n-i-1); }
    return res; }
int main() {
    int t;
    scanf ("%d",&t);
    int k[t],i;
    for (i=0;i<t;i++) {
        scanf ("%d\n",&k[i]); }
    int j,sum=0;
    for (i=0;i<t;i++) {
        for (j=0;j<=k[i];j++)
        {sum=sum+catalan(j);}
        printf ("%d\n",sum); }
	return 0; }
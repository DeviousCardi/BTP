#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,res=0;
    if (n==0)
    return 1;
    for (i=0;i<n;i++)
    res=res+catalan(i)*catalan(n-i+1);
    return res; }
int main() {
	int t,num[50],i,p;
	scanf("%d\n",&t);
	for (i=0;i<t;i++) {
	    scanf("%d\n",&num[i]);
	    p=catalan(num[i]);
	    printf("%d\n",p); }
	return 0; }
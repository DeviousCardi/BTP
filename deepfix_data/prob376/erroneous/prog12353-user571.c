#include <stdio.h>
#include <stdlib.h>
int sum,i=0;
int catalan(int n)
{   i++;
    if(n==0 || n==1) {
        return 1; }
    sum+catalan(n-i)*catalan(i)
    return (); }
int main() {
    int i,t,cat;
	scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        cat=catalan(n);
        printf("%d\n",cat); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int sum,i=0;
int catalan(int n) {
    if(n==0 || n==1) {
        return 1; }
    i++;
    return (catalan(n-i)*catalan(i)); }
int main() {
    int i,t,cat,n;
	scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        cat=catalan(n);
        printf("%d\n",cat); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0)
    printf("1");
    else {
        for(i=0;i<n;i++) {
            sum=sum+catalan(i)*catalan(n-1-i);
            printf("%d",sum); } } }
int main() {
    int i,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        catalan(n); }
	return 0; }
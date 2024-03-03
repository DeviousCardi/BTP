#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i;long int sum=0;
    if(n==0)
    return 1;
    else {
        for(i=0;i<n;i++)
        sum=sum+catalan(i)*catalan(n-i-1);
        return sum; }
    printf("%ld", sum); }
int main() {
    int test,i,j,n;
    scanf("%d",&test);
    for(i=0;i<=test-1;i++) {
        scanf("%d",&n);
        for(j=1;j<=17;j++) {
            if(catalan(j)==n)
            printf("yes");
            else
            printf("no"); } }
	return 0; }
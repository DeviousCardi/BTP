#include <stdio.h>
#include <stdlib.h>
int A(int m,int n) {
    if(m==0)
    return n+1;
    else if(m>0&&n==0)
    return A(m-1,1);
    else if(m>0&&n>0)
    return A(m-1,A(m,n-1)); }
int main() {
    int m,n,k;
    scanf("%d\n",&k);
    for(m=0;m<=3;m++) {
        for(n=0;n<=5;n++) {
            if(A(m,n)==k)
            printf("%d %d",m,n);
            else
            printf("-1"); } }
	return 0; }
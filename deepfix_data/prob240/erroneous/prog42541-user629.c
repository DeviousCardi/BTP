#include <stdio.h>
#include <stdlib.h>
int catalan(int m) {
    if(m==0)
    return 1;
    else if(m==1)
    return 1;
    else
    return ((2*((2*m)-1))/(m+1))*catalan(m-1); }
int main() {
    int t,k,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;j<=5;j++) {
            printf("%d",catalan(j)); } } }
	return 0; }
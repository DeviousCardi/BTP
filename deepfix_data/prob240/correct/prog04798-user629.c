#include <stdio.h>
#include <stdlib.h>
int catalan(int m) {
    if(m==0)
    return 1;
    else
    return (2*(2*m+1)/(m+2))*catalan(m-1); }
int main() {
    int t,k,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;j<=k;j++) {
            if(catalan(j)>=k)
            {printf("%d\n",catalan(j-1));
             break; } } }
	return 0; }
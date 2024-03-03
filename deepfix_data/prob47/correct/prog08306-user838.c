#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    int ans,k;
    if(n==0)
    ans=1;
    else {
        k=n*((2*n)-1);
        ans=catlan(n-1)+k; }
    return ans; }
int main() {
    int t,arg[1000],i,j,sum[1000];
    scanf("%d",&t);
    for(i=0;i<=t;i++) {
            scanf("%d",&arg[i]); }
    for(i=0;i<t;i++) {
            sum[i]=0;
            for(j=0;j<=arg[i];j++) {
                    sum[i]=sum[j]+catlan(j-1); }
            printf("%d\n",sum[i]); }
	return 0; }
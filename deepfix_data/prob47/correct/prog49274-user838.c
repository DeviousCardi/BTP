#include <stdio.h>
#include <stdlib.h>
int catlan (int n) { }
int main() {
    int t,arg[1000],i,j;
    int sum[1000];
    scanf("%d",&t);
    for(i=0;i<=t;i++) {
            scanf("%d",&arg[i]); }
    for(i=0;i<t;i++) {
            sum[i]=0;
            for(j=0;j<arg[i];j++) {
                    sum[i]=sum[i]+catlan(j); }
            printf("%d\n",sum[i]); }
	return 0; }
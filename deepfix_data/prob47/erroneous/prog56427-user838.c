#include <stdio.h>
#include <stdlib.h>
int catlan (int n)
int unvalid(int n) {
    int ans;
    if(n==1)
    ans=1;
    else {
        ans=catlan(n-1); }
    return ans; }
int catlan(int n) {
    int ans;
    if(n==0)
    ans=1;
    else if(n==1)
    ans=1;
    else {
        ans=catlan(n-1)+unvalid(n-1); }
    return ans; }
int main() {
    int t,arg[1000],i,j;
    long int sum[1000];
    scanf("%d",&t);
    for(i=0;i<=t;i++) {
            scanf("%d",&arg[i]); }
    for(i=0;i<t;i++) {
            sum[i]=0;
            for(j=0;j<arg[i];j++) {
                    sum[i]=sum[i]+catlan(j); }
            printf("%ld\n",sum[i]); }
	return 0; }
#include <stdio.h>
long sum=0;
int twosum(long a[],long N,long M,int p) {
    if(sum==M)
    return 1;
    if(N==-1)
    return 0;
    sum=sum+a[p];
    twosum(a,N,M,p+1);
    sum=sum-a[p];
    twosum(a,N,M,p+1); }
int main() {
    long N,j,M,a[1000],flag=0;
    scanf("%ld,%ld",&N,&M);
    for(j=0;j<N;j++) {
        scanf("%ld",&a[j]); }
    flag=twosum(a,N,M,0);
    if(flag==1)
    printf("YES");
    else
    printf("NO");
    return 0; }
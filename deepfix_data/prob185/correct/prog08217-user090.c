#include <stdio.h>
long sum=0;
int twosum(long a[],long N,long M,long p) {
    printf("%ld   %ld\n",sum,M);
    if(sum==M)
    return 1;
    else if(p==N)
    return 0;
    sum=sum+a[p];
    return twosum(a,N,M,p+1);
    sum=sum-a[p];
    return twosum(a,N,M,p+1); }
int main() {
    long N,j,M,a[1000],flag=0;
    scanf("%ld%ld",&N,&M);
    for(j=0;j<N;j++) {
        scanf("%ld",&a[j]); }
    flag=twosum(a,N,M,0);
    if(flag==1)
    printf("YES");
    else
    printf("NO");
    return 0; }
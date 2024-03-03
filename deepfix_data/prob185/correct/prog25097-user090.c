#include <stdio.h>
long sum=0;
void twosum(long a[],long N,long M,int p) {
    printf("%ld\n",sum);
    if(sum==M)
    return ;
    if(p==N)
    return ;
    sum=sum+a[p];
    twosum(a,N,M,p+1);
    sum=sum-a[p];
    twosum(a,N,M,p+1); }
int main() {
    long N,j,M,a[1000],flag=0;
    scanf("%ld,%ld",&N,&M);
    for(j=0;j<N;j++) {
        scanf("%ld",&a[j]); }
    twosum(a,N,M,0);
    if(M==sum)
    printf("YES");
    else
    printf("NO");
    return 0; }
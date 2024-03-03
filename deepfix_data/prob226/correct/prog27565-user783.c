#include <stdio.h>
int main() {
    int d,N,i,sum=0,j;
    scanf("%d %d",&d,&N);
    int b[d],a[N+1];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    if(N<d)
    printf("%d",b[N]);
    else {
        for(i=d;i<=N;i++) {
            for(j=1;j<=d;j++) {
                sum=sum+a[i-j]; }
            a[i]=sum; }
            printf("%d",sum); }
	return 0; }
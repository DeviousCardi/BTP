#include <stdio.h>
int main() {
    int d,N,i,j,w,sum=0;
    scanf("%d %d\n",&d,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    int a[N];
    for(i=0;i<d;i++) {
        a[i]=b[i];
        sum=sum+a[i]; }
    a[d]=sum;
    for(i=d+1;i<=N;i++) {
        for(j=0;j<d;j++) {
        a[i]=2*a[i-1] - a[i-d-1]; } }
    printf("%d",a[N]);
	return 0; }
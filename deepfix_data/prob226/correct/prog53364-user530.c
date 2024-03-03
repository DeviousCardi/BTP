#include <stdio.h>
int main() {
    int d,N,i,j,w;
    scanf("%d %d\n",&d,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    int a[N];
    for(i=d;i<d;i++) {
        a[i]=b[i]; }
    for(i=d;i<=N;i++) {
        for(j=0;j<d;j++) {
        a[i]=2*a[i-1]+a[i-d]; } }
    printf("%d",a[N+1]);
	return 0; }
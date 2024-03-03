#include <stdio.h>
int main() {
    int d,N,i,j,w;
    scanf("%d %d\n",&d,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    int a[d];
    for(i=0;i<d;i++) {
        a[i]=b[i]; }
    int t=0,new[N];
    new[0]=a[0];
    for(i=d;i<N;i++) {
        for(j=1;j<=w;j++) {
        t=new[i-j]+t; } }
    printf("%d",new[N-1]);
	return 0; }
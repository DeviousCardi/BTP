#include <stdio.h>
int main() {
    int d,N,i,j;
    scanf("%d %d\n",&d,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    int a[d];
    for(i=0;i<d;i++) {
        a[i]=b[i]; }
    int new[N];
    new[0]=a[0];
    for(i=0;i<N;i++) {
        new[i]=0;
        for(j=0;j<=i;j++) {
            new[i]=new[i]+a[j]; } }
    printf("%d",new[N]);
	return 0; }
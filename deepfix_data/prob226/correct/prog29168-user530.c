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
    int new[N];
    new[0]=a[0];
    for(i=1;i<N;i++) {
        w=i%d;
        for(;j==w;) {
            new[i]=new[i-1]+a[j]; } }
    printf("%d",new[N-1]);
	return 0; }
#include <stdio.h>
int main() {
    int i,d,N,q;
    scanf("%d %d\n",&d,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    int a[N];
    for(i=0;i<d;i++) {
        q=q+a[N-(i+1)]; }
    if (N>=0&&N<d) {
        a[N]=b[N]; }
    else {
        a[N]=q }
    printf("%d",&a[N]);
	return 0; }
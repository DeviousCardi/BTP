#include <stdio.h>
int main() {
    int d,N,i,sum;
    scanf("%d %d\n",&d,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    int a[d];
    for(i=0;i<d;i++) {
        a[i]=b[i]; }
    sum=a[0];
    for(i=1;i<N;i++){
        sum=sum+a[i]; }
    printf("%d",sum);
	return 0; }
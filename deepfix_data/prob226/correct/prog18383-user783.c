#include <stdio.h>
int main() {
    int d,N,i,sum=0;
    scanf("%d %d",&d,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]);
        sum=sum+b[i]; }
    if(N<d)
    printf("%d",b[N]);
    else {
        for(i=d;i<N;i++) {
            sum=sum+sum;
            printf("%d",sum); } }
	return 0; }
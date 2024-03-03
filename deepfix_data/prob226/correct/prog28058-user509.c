#include <stdio.h>
int main() {
    int d,n,i,sum=0;
    scanf("%d %d",&d,&n);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    if(d>n) {
        sum=b[n]; }
        for(i=0;i<d;i++) {
            sum=sum+b[i];
            b[i]=b[i+1];
            b[i+1]=sum; }
    printf("%d",sum);
	return 0; }
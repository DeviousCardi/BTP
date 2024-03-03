#include <stdio.h>
# include <math.h>
int main() {
    int d,n,i,l,k,sum=0;
    scanf("%d %d",&d,&n);
    int b[1000];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    if(d>n)
    sum=b[n];
    else if(d<=n) {
        for(i=0;i<n-d;i++) {
            sum=sum+b[i]; } }
    printf("%d",sum);
	return 0; }
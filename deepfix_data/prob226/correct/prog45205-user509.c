#include <stdio.h>
int main() {
    int d,n,i,sum=0;
    scanf("%d %d",&d,&n);
    int a[n],b[n];
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<d;i++) {
    if(i>n)
        a[n]=b[i];break;
        if(i<=n) {
            sum=sum+b[i];
            a[n]=sum; } }
    printf("%d",a[n]);
	return 0; }
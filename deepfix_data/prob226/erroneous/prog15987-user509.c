#include <stdio.h>
int main() {
    int d,n,j=0,i,s,sum=0;
    scanf("%d%d",&d,&n);
    int b[n];
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    if(d>n) {
        s=b[n]; }
        for(i=0;i<d;i++) {
            sum=sum+b[i];
            s=sum; } }
    printf("%d",s);
	return 0; }
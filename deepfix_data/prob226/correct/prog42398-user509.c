#include <stdio.h>
int main() {
    int d,n,i,s,sum=0;
    scanf("%d%d",&d,&n);
    int b[n];
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<d;i++) {
    if(i>n)
        s=b[i];
        else {
            sum=sum+b[i];
            s=sum; } }
    printf("%d",s);
	return 0; }
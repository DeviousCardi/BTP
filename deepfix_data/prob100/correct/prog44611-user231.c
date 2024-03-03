#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,a,b,c,d,k;
    scanf("%d%d",&m,&n);
    scanf("%d",&c);
    for(a=1;a<m;a++){
        scanf("%d",&d);
        if(d>c)
        c=d; }
    k=c;
    for(b=1;b<n;b++){
        scanf("%d",&c);
    for(a=1;a<m;a++){
        scanf("%d",&d);
        if(d>c)
        c=d; }
    if(c>k)
    k=c; }
    printf("%d",k);
    return 0; }
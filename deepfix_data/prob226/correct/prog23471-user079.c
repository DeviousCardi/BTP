#include<stdio.h>
int main() {
    int i,d,N,s=0,b[2000],a[2000];
    scanf("%d%d",&d,&N);
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]);
        s=b[i]+s;
        a[i]=b[i]; }
    printf("%d\n",s);
    if(N<d) {
        printf("%d",b[N]); }
    else {
        for(i=d;i<=N;i++) {
           a[i]=s+a[i-1]-a[i-1-d]; }
        printf("%d",a[N]); } }
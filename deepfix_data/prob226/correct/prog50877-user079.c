#include<stdio.h>
int main() {
    int i,d,N,s=0,b[2000],a[2000];
    scanf("%d%d",&d,&N);
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]);
        s=b[i]+s;
        a[i]=b[i]; }
    if(N<d) {
        printf("%d",b[N]); }
    else
    {  if(N>d){
        for(i=d+1;i<=N;i++) {
           a[i]=s+a[i-1]-a[i-1-d];
           s=a[i]; }
        printf("%d",a[N]); }
    else
    printf("%d",s); }
    printf("y%d",a[2]);
    return 0; }
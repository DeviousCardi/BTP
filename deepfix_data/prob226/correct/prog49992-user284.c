#include<stdio.h>
int main() {
    int a[50],i,s,d,n,t=0;
    scanf("%d",&d);
    scanf("%d",&n);
    for(i=0;i<d;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<d;i++) {
        t=t+a[i]; }
    if(n<d) {
        i=0;
        s=0;
        while(i<=n) {
        s=s+a[i];
        i++; }
        printf("%d",s); }
    if(n>=d)
    {s=0;
        for(i=d;i<=n;i++) {
            s=s+t; }
        printf("%d",s); }
    return 0; }
#include <stdio.h>
int main() {
    int n,i,t=0,j,m;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
           if(i==a[j])
           {t=t+1;
           b[i]=t;}
           else
            m=i; }
        t=0; }
    for(i=0;i<n;i++) {
        if(b[i]==2)
           printf("%d",a[i]);
           break; }
    printf("%d",m);
    return 0; }
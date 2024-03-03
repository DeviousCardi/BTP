#include <stdio.h>
int main() {
    int n,i,t=0,j,m,k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    b[0]=0;
    for(i=1;i<n;i++) {
        for(j=0;j<n;j++) {
           if(i==a[j])
           {t=t+1;
           b[i]=t;}
           else if(i!=a[j])
             k=k+1; }
        t=0; }
    for(i=0;i<n;i++) {
        if(b[i]==2)
           printf("%d\n",a[i]);
           break; }
    if(k==m-2)
    printf("%d",m);
    return 0; }
#include <stdio.h>
int main() {
    int n,i,t=0,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                t=t+1; } }
        b[i]=t;
        t=0; }
    for(i=0;i<n;i++) {
     if((b[i]!=1)&&(b[i]!=0))
       printf("%d",a[i]);
       else if(b[i]==0)
        printf("%d",a[i]); }
    return 0; }
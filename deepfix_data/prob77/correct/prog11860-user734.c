#include <stdio.h>
int main() {
    int b,i,j,x,y=0,m,n=0;
    scanf("%d",&b);
    int a[b];
    scanf("%d",&a[0]);
    for(i=1;i<b;i++) {
        scanf("%d",&a[i]); }
    x=a[0];
    for(j=0;j<b;j++) {
        if(x<=a[j]) {
            x=a[j];
            y=j; } }
    m=a[0];
    for(i=0;i<b;i++) {
        if(m>=a[i]) {
            m=a[i];
            n=i; } }
    a[n]=x;
    a[y]=m;
    for(i=0;i<b;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }
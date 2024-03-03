#include <stdio.h>
int main() {
    int b,i,x,y,m,n;
    scanf("%d",&b);
    int a[b];
    scanf("%d",&a[0]);
    for(i=1;i<b;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<b;i++) {
        x=a[0];
        if(x<a[i]) {
            x=a[i];
            y=i; }
        else
        y=0; }
    for(i=1;i<b;i++) {
        m=a[0];
        if(m>a[i]) {
            m=a[i];
            n=i; }
        else
        n=0; }
    a[y]=a[m];
    a[x]=a[n];
    for(i=0;i<b;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }
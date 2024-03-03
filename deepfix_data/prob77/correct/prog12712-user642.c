#include <stdio.h>
int main() {
    int x,y,i,n,i1,i2;
    scanf("%d\n",&n);
    int a[n];
    x=0;
    y=1000;
    for (i=0;i<n;i++) {
    scanf("%d",&a[i]);
    if (a[i]>x) x=a[i];
    if (a[i]<y) y=a[i]; }
    for (i=0;i<n;i++) {
    if (a[i]==x) i1=i;
    if (a[i]==y) i2=i; }
    a[i1]=y;
    a[i2]=x;
    for (i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }
#include <stdio.h>
int main() {
    int d,n;
    int b[20];
    scanf("%d%d\n",&d,&n);
    for(int i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    int a[32];
    for(int i=0;i<d;i++) {
        a[i]=b[i]; }
    int sum=0;
    for(int i=d;i<n;i++) {
        for(int j=1;j<=d;j++) {
           sum=sum+a[i-j];
            a[i]=sum; } }
    printf("%d",a[n]);
      return 0; }
#include <stdio.h>
int main() {
    int m,i,count,n;
    scanf("%d",&m);
    int a[m];
    count=0 ;
    int ch ;
    for(i=0;i<=m;i=i+1) {
         scanf("%d",&a[i]);
         count=count+1 ;
        printf("%d",a[i]); }
    printf("end");
    return 0; }
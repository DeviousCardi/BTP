#include <stdio.h>
#include <stdlib.h>
int main() {
int n,m,x,y,i,j,count=0;
    scanf("%d ",&n);
    scanf("%d ",&m);
    scanf("%d ",&x);
    scanf("%d\n",&y);
    int a[n],b[m],c[n],d[m];
    for(i=1;i<=n;i++) {
        scanf("%d ",&a[i]);
    }   scanf("\n");
    for(i=1;i<=m;i++) {
        scanf("%d ",&b[i]); }
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
           if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)
           c[count]=i;d[count]=j;
           count++; } }
    printf("%d\n",count);
    for(i=0;i<count;i++) {
        printf("%d ",c[i]);
    }   printf("\n");
    for(i=0;i<count;i++) {
        printf("%d ",d[i]);
    }   printf("\n");
    return 0; }
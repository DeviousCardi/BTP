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
        for(j=count+1;j<=m;j++) {
           if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)) {
           c[count]=i;d[count]=j;
           count++;
           break; } } }
    printf("%d\n",count);
    for(i=0;i<count;i++) {
        printf("%d %d\n",c[i],d[i]); }
    return 0; }
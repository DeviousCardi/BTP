#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[500],b[500],c[501];
    int n,m,i,k,l,f=0,p=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("\n");
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]); }
    printf("\n");
    if(m<n) {
       for(i=1;i<=m;i++) {
           f=f+a[n-i]+b[m-i];
           c[500-p]=f%10;
           f=f/10;
           p++; }
       for(i=m+1;i<=n;i++) {
           f=f+a[n-i];
           c[500-p]=f%10;
           f=f/10;
           p++; }
       if(f!=0)
       c[500-p]=f;
       else
       p--; }
    for(i=p;i>0;p--) {
        printf("%d",c[500-i]); }
	return 0; }
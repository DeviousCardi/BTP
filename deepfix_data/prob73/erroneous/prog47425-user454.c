#include <stdio.h>
int max(int c,int d) {
    if(c>=d)
    return c;
    else return d; }
int main() {
   int n,m,s=0;
   scanf("%d%d%",&n,&m);
   int a[n],b[m];
   for(int i=0; i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&b[j]);
            a[i]=a[i]+b[j]; } }
   for(int i=0,;i<n;i++) {
       s=max(s,a[i]); }
    printf("%d",s);
    return 0; }
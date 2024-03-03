#include <stdio.h>
int max(int c,int d) {
    if(c>=d)
    return c;
    else return d; }
int main() {
   int n,m,s=0;
   scanf("%d%d%",&n,&m);
   int a[n],b[m],ch;
   for(int i=0; i<n;i++) {
        a[i]=0;
        for(int j=0;j<m;j++) {
            ch=getchar();
            b[j]=ch;
            printf("%d",b[j]);
            a[i]=a[i]+b[j]; } }
   for(int i=0;i<n;i++) {
       s=max(s,a[i]); }
    printf("%d",s);
    return 0; }
#include<stdio.h>
int main() {
    int n,m,i,l,a[n],b[m],t,s,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        s=l+a[i];
        l=a[i]; }
      for(i=0;i<n;i++) {
        scanf("%d",&b[i]);
        t=k+b[i];
        k=b[i]; }
       if(s>m)
            printf("%d",s);
       else
            printf("%d",t);
        return 0; }
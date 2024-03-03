#include <stdio.h>
int main() {
    int i,n;
    int x,y,j,z;
    scanf("%d",&n);
    int k[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&k[i]); }
    for(i=1;i<=n;i++) {
        x=max(k[i],k[i+1]); }
    for(i=1;i<=n;i++) {
        y=min(k[i],k[i+1]); }
     for(i=1;i<=n;i++) {
         if(x==k[i])
         break; }
     for(j=1;j<=n;j++) {
         if(y==k[j])
         break; }
     z=k[i];
     k[i]=k[j];
     k[j]=z;
     for(i=1;i<=n;i++) {
         printf("%d ",k[i]); }
    printf("end");
    return 0; }
 int max(int a,int b) {
     if(a>b)
      return a;
     else
     return b; }
 int min(int p,int q) {
     if(p>q)
     return q;
     else
     return p; }
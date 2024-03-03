#include <stdio.h>
int main() {
    int i,n,m=0;
    int x,y,j,z;
    scanf("%d",&n);
    int k[n];
    for(i=0;i<n;i++) {
        scanf("%d",&k[i]); }
    for(i=0;i<n;i++) {
        x=max(k[i],k[i+1]);
        if(x>m)
        m=x; }
    for(j=0;j<n;j++) {
        y=min(k[j],k[j+1]); }
     z=k[j];
     k[j]=k[i];
     k[i]=z;
     for(i=0;i<n;i++) {
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
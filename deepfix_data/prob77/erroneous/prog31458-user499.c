#include <stdio.h>
int main() {
    int i,k[n],n;
    int x,y,j,z;
    scanf("%d",&n);
    for("i=1;i<=n;i++") {
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
         printf("%d",k[i]); }
    printf("end");
    return 0; }
 int max(int a,int b) {
     int a,b,c;
     c=(b>a)?b;a;
     return c; }
 int min(int p,int q) {
     int p,q,r;
     r=(p>q)?q;p;
     return r; }
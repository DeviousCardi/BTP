#include <stdio.h>
int main(){
    int n,i,j,c=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a); }
        scanf("\n"); }
 for(i=1;i<=n;i++) {
     for(j=1;j<=n;j++) {
         if((i==j&&a==1)&&(i!=j&&a==0)) {
             c=c+1; } } }
 if(c==n) {
     printf("identity"); }
 else
 printf("not identity");
    return 0; }
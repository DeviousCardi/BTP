#include <stdio.h>
int main(){
 int n,i,t=0,j,k=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++) {
     for(j=1;j<=n;j++) {
        scanf("%d",t);
        if(i==j&&t==1)
        continue;
        if(i!=j&&t==0)
        continue;
        else {
        printf("no");
        k+=1; } }
     scanf("\n"); }
    if(k==0)
    printf("yes");
    return 0; }
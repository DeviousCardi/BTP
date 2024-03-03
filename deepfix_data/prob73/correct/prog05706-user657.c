#include <stdio.h>
int main() {
int a,b,i,j,c,k;
int sum=0;
scanf("%d %d",&a,&b);
int l[a];
for(i=0;i<a;i++){
    sum=0;
    for(j=0;j<b;j++){
        scanf("%d",&c);
         sum=sum+c; }
        l[k]=sum;
        printf("%d ",l[k]); }
    return 0; }
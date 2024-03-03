#include <stdio.h>
int main() {
int a,b,i,j,c;
int sum=0;
scanf("%d %d",&a,&b);
for(i=0;i<a;i++){
    sum=0;
    for(j=0;j<b;j++){
        scanf("%d",&c);
         sum=sum+c; }
    printf("%d",sum); }
    return 0; }
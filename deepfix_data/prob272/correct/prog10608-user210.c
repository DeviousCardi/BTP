#include <stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
int i,res;
for(i=1;i<=n-3;i++) {
    res=(a1+a2)-2;
    a2=res;
    a1=a2; }
printf("%d",res);
return 0; }
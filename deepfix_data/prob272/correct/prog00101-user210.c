#include <stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
int i,res;
i=4;
while(i<=n) {
    res=a2+a1-2;
    a2=res;
    a1=a2;
    i++; }
printf("%d",res);
return 0; }
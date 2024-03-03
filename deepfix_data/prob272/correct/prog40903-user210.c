#include <stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
int i,res;
i=1;
while(i<=n-2) {
    res=a2+a1-2;
    a1=a2;
    a2=res;
    i++; }
printf("%d",res);
return 0; }
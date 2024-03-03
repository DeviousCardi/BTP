#include <stdio.h>
int main(){
    int a1,a2,n,t1,t2,tn,i;
    scanf("%d%d%d",&a1,&a2,&n);
    t1=a1;
    t2=a2;
if(n==1) {
    printf("%d",a1); }
else if(n==2) {
    printf("%d",a2); }
else {
for(i=3;i<=n;i++)
{   tn=t1+t2-2;
    t1=t2;
    t2=tn; }
printf("%d",tn); }
    return 0; }
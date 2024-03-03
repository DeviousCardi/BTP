#include <stdio.h>
int main(){
    int s[500];
    int i,k,sum=0;
    scanf("%d",&k);
    for(i=1;i<=500;i+2) {
        printf("%d",s[i]); }
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    printf("%d",a);
    sum=sum+1;
   if(sum==k)
   printf("lucky");
   else
   printf("unlucky");
    return 0; }
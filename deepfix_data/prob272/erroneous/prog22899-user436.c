#include <stdio.h>
int main(){
    int n,a1,a2,i,t1,t2;
     scanf("%d%d%d",&n,&a1,&a2);
    int sum=a1+a2;
    if(n==1){printf("%d",a1);}
    else if(n==2){printf("%d",a2);}
    for(i=3;i<=n;i++;) {
        sum=sum-2; }
    printf("%d",sum);
     return 0; }
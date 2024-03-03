#include <stdio.h>
int main(){
    int a1,a2,n,i,sum,a3;
    scanf("%d%d%d",&a1,&a2,&n);
    if (n==1)
    {sum=a1;}
    else if(n==2)
    {sum=a2;}
    else if(n>2) {
    for(i=3 ;i<n;i++) {
        sum=a2+a1-2;
        a2=sum;
        a1=a2; } }
    printf("%d",sum);
    return 0; }
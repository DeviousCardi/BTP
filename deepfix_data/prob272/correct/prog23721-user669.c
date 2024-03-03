#include <stdio.h>
int main(){
    int a1,a2,n,i,sum;
    scanf("%d%d%d",&a1,&a2,&n);
    for(i=3 ;i<n;i++) {
        sum=a2+a1-2;
        a2=sum;
        a1=a2;
     i=i+1; }
    printf("%d",sum);
    return 0; }
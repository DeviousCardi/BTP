#include <stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d%d%d",&a1,&a2,&n);
    int sum=0;
    for(int i=0; i<n-2; i++) {
        sum=a1+a2-2;
        a2=a1;
        a1=sum; }
    printf("%d",sum);
    return 0; }
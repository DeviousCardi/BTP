#include <stdio.h>
int main() {
    int a,b,i,j,x,sum,max;
    scanf("%d %d",&a,&b);
    int num[a];
    max=0;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            scanf("%d",x);
            sum=sum + x }
        num[i]=sum; }
    for(i=1;i<=a;i++)
    max=(max>num[i])?max:num[i];
    printf("%d",max);
    return 0; }
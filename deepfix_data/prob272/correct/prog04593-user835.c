#include <stdio.h>
int main(){
    int a1,a2,i,n,j;
    int sum=0;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        j=a1+sum-3;
        j=a2+j;
        j=j-2;
        sum=sum+1; }
    printf("%d\n",j);
    return 0; }
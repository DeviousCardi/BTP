#include <stdio.h>
int main(){
    int a1,a2,i,n,j;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
    if(n==1)
        printf("%d",a1);
    if(n==2)
        printf("%d",a2);
    if(n>3) {
    for(i=3;i<=n;i++) {
        j=a1+a2-2;
        a1=a2;
        a2=j; }
    printf("%d\n",j); }
    return 0; }
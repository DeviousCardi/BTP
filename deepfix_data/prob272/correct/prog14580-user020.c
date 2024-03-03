#include <stdio.h>
int main(){
    int i,n,a1,a2,ans=0,j;
    scanf("%d%d%d",&a1,&a2,&n);
    if(n==1)
    printf("%d",a1);
    else if(n==2)
    printf("%d",a2);
    else if (n>2) {
        for(i=1;i<=(n-2)&&i>0;i++) {
            for(j=0;j<=i&&j>0;j++) {
                ans=ans+a1+a2; } } }
    return 0; }
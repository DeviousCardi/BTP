#include <stdio.h>
int main(){
    int i,n,sum=1;
    scanf("%d",&n);
    if(n%2!=0) {
        for(i=1;i<=n;i++)
        sum=sum+i;
        if(sum==n) {
            printf("lucky");
        }else
            printf("unlucky"); }
    return 0; }
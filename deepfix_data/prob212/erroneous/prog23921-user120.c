#include <stdio.h>
int main(){
    int n,s=0,a;
    scanf("%d",&n);
    do(
        a=n%10;
        s+=a;
        n=n/10;
        )while(n!=0);
        for(int i=2016;i++) {
            if(i%s==0)
            printf("%d",i); }
    return 0; }
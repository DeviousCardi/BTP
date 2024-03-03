#include <stdio.h>
int main(){
    int a1,a2,n,p,q,r,temp;
    p=1,q=1,r=-2;
    scanf("%d%d%d",&a1,&a2,&n);
        while(n>3){
            temp=p;
            p=p+q;
            q=temp;
            r=(p+q-1)*2;
            n=n-1; }
    printf("%d",p*a1+q*a2+r);
    return 0; }
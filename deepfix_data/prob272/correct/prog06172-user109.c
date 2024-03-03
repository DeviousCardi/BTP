#include <stdio.h>
int main(){
    int a1,a2,n,i,p,q,r,temp,Tn;
    p=1,q=1,r=1;
    scanf("%d%d%d",&a1,&a2,&n);
        while(i>3){
            temp=p;
            p=p+q;
            q=temp;
            r=(p+q-1);
            i=i-1; }
         printf("%d",p*a2+q*a1-2*r);
    return 0; }
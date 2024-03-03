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
    if(n>=3){
         Tn = p*a2+q*a1-2*r; }
    if (n==2){
        Tn = a2; }
    if (n==1){
        Tn = a1; }
 printf("%d",Tn);
    return 0; }
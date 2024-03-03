#include <stdio.h>
int main(){
    int n,s=0,a,i=2016;
    scanf("%d",&n);
    do{
        a=n%10;
        s+=a;
        n=n/10;
        }while(n!=0);
        while(i<=3000) {
            if(i%s==0)
            printf("%d\n",i);
            i++; }
    return 0; }
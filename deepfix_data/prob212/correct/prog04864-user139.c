#include <stdio.h>
int main(){
    int a;
    int i;
    int sum=2016;
    scanf("%d",&a);
    int a1=a%10;
    int a2=(a/10)%10;
    int a3=(a/100)%10;
    int a4=a/1000;
        for(i=0;;i++){
            if(sum%(a1+a2+a3+a4)==0)
            {printf("%d",sum);break;}
            else
            sum =sum+1; }
    return 0; }
#include<stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    if(n==1)printf("%d",a1);
    else if(n==2)printf("%d",a2);
    else{
        int i=1;
        int sum=a1+a2-2;
        while(i<n-2){
            a1=a2;
            a2=sum;
            sum=a1+a2-2;
            i+=1; }
    printf("%d",sum); }
    return 0; }
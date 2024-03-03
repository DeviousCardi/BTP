#include <stdio.h>
int main(){
    int n,sum=0;
    int tmp;
    for(int i=0;n!=0;i++){
        tmp=n%10;
        sum=sum+tmp;
        n=n/10; }
    tmp=1;
    for(int year=2016;tmp!=0;year++){
        tmp=year%sum;
        if(tmp==0)
            printf("%d",year); }
    return 0; }
#include <stdio.h>
int sum(int no);
int sum(int no){
    int x=no,sum1=0;
    while(x){
        sum1=sum1+x%10;
        x=x/10; }
    return sum1; }
int main(){
    int no;
    scanf("%d",&no);
    int no1=2016;
    while(1){
        if (!(no1%sum(no))){
            printf("%d",no1);
            break; }
        no1++; }
    return 0; }
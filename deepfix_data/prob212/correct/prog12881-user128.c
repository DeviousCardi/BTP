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
    int no1=no,no2=no,n1,n2;
    while(1){
        if (!(no1%sum(no))){
            n1=no1;
            break; }
        no1++; }
    while(1){
        if (!(no2%sum(no))){
            n2=no2;
            break; }
        no2--; }
    if((n1-no)<(no-n2))
        printf("%d",n1);
    else
        printf("%d",n2);
    return 0; }
#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int a=year%10;
    int b=a;
    while(a!=0){
        a=year%10; }
    int x1=a;
    int c=b%10;
    while(c!=0){
        c=b%10; }
    int x2=c;
    printf("%d %d",x1,x2);
    return 0; }
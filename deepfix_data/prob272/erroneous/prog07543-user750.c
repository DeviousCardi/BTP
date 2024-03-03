#include <stdio.h>
int main(){
    int num1=0;
    int num2=0;
    int term=0;
    int num=0;
    scanf("%d%d%d",&num1,&num2,&term);
    for(i=1;i<=(term-2);i++){
        num=num2+num1-2;
        num1=num2;
        num2=num; }
    printf("%d",num);
    return 0; }
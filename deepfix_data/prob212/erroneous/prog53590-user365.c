#include <stdio.h>
#include <math.h>
int main(){
    int byear;
    int digit[4];
    int i=1;
    int sum;
    scanf("%d",&byear);
    digit[0]=byear%10;
    sum=digit[0];
    while(i<=3){
        digit[i]=(byear%(int)pow(10,i+1)-sum)/(int)pow(10,i);
        sum=digit[i]*(int)pow(10,i)+digit[i-1](int)pow(10,i-1); }
    printf("%d %d %d %d",digit[0],digit[1],digit[2],digit[3]);
    return 0; }
#include <stdio.h>
int main(){
    int i,r ;
    char y;
    int sum=0;
    for (i=0;i<4;i++){
        scanf("%c",&y);
        sum = y-('0')+sum; }
    r=2016%sum;
    if (r==0){
        printf("2016"); }
    else {
        printf("%d",sum*((2016/sum)+1)); }
    return 0; }
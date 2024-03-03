#include <stdio.h>
int main(){
    int i,y,s;
    scanf("%d",&y);
    s=((y%10000-y%1000)/1000)+((y%1000-y%100)/100)+((y%100-y%10)/10             )+(y%10)/10 ;
    for(i=2016;i%s!=0;i++);
    printf("%d",i);
    return 0; }
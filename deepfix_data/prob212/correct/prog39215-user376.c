#include <stdio.h>
int main(){
    int y, cy=2016,s;
    scanf("%d",&y);
    while(cy>=2016) {
        s=(y/1000)+((y/100)-10)+100+((y/10)-100)+(y-1000);
        if(y%s==0)
        break;
        cy++; }
    printf("%d",cy);
    return 0; }
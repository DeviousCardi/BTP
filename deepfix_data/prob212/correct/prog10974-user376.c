#include <stdio.h>
int main(){
    int y, cy=2016,s;
    scanf("%d",&y);
    while(cy>=2016) {
        s=(cy/1000)+((cy/100)-10)+100+((cy/10)-100)+(cy-1000);
        if(y%s==0)
        break;
        cy++; }
    printf("%d",cy);
    return 0; }
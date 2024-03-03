#include <stdio.h>
int main(){
    int yr=0;
    int i=0,j=1,p=0,d=0;
    scanf("%d",&yr);
    while(j<=4){
        d=yr%10;
        p=p+d;
        yr=yr/10;
        j=j+1; }
    for(i=2016;i>=2016;i++){
        if(i%p==0){
        printf("%d",i);
        break;} }
    return 0; }
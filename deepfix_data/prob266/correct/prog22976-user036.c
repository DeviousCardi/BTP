#include <stdio.h>
int main(){
    int y,sum=0;
    scanf("%d",&y);
    while(y){
        sum=sum+(y%10);
        y=y/10; }
    for(int i=2016;i<2016+sum;i++){
        if((i%sum)==0)
            printf("%d",i); }
    return 0; }
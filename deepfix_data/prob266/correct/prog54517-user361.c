#include <stdio.h>
int main(){
         int year,i,j,sum=0,m,yob,lucky=0;
         scanf("%d",yob);
for(i=1;i<=4;i++){
    m=yob%10;
    sum=sum+m; }
sum=sum+(yob/1000);
for(j=2016;j<3000;j++){
    if(j%sum==0){
        lucky;
        if(lucky>j){
            lucky=j; } }
    printf("%d",lucky); }
    return 0; }
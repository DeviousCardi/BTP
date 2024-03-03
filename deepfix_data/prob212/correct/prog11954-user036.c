#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int sum=0;
    while(year){
        sum=sum+(year%10);
        year=year/10; }
    int i=0,s=2016;
    while(2016+sum>s){
        if((s%sum)==0) {
            printf("%d",s);break; }
        s=s+1; }
    return 0; }
#include <stdio.h>
int main(){
int birth_year,lucky_year=2016,sum=0,temp;
scanf("%d",&birth_year);
temp=birth_year;
while(temp>0) {
    sum=sum+(temp%10);
    temp=temp/10; }
while((lucky_year%sum)!=0) {
    lucky_year++; }
 printf("%d",lucky_year);
    return 0; }
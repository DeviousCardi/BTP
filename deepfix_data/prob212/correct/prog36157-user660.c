#include <stdio.h>
int main() {
    int dob,sum=0,year=2016;
    scanf("%d",&dob);
    while(dob>0) {
            sum=sum+(dob%10);
            dob=dob/10; }
    while(1) {
            if(year%sum==0) {
                 printf("%d",year);
                 break; }
           year=year+1; }
    return 0; }
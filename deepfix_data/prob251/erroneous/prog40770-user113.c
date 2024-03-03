#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int count=0;
void sum(int no1,int no3,int no5,int sum) {
    if((no1+(3*no3)+(5*no5))>=sum){
        if((no1+(3*no3)+(5*no5))==sum) count++;
        return; }
    sum(no1+1,no3,no5,sum);
    sum(no1,no3+1,no5,sum);
    sum(no1,no3,no5+1,sum); } { }
int main() {
    int total;
    scanf("%d",&total);
    sum(0,0,0,total);
    printf("%d",count);
    return 0; }
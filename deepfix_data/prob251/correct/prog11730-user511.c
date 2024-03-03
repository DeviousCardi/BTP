#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int static sum=0;
    if(m==1)return sum=sum+1;
    else if(m==2) {
        sum=sum+(x/3);
        return sum; }
    else {
        while(x/5!=0) {
            sum=1+getways(x-5,2)+getways(x-5,1); } } }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=3;i++) {
        sum=sum+getways(n,i); }
    printf("%d",sum);
    return 0; }
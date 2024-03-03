#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    long int static sum=0;
    if(x==0) return 0;
    if(m==1) {
        sum=sum+1;
        printf("%d ",sum);
        return sum; }
    else if(m==2) {
        sum=sum+(x/3);
       printf("%d ",sum);
        return sum; }
    else {
        if(x/5!=0)
           {return sum=sum+1+getways(x-5,2)+getways(x-5,1);}
        else return sum=sum+0; } }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=3;i++) {
        sum=getways(n,i); }
    printf("%d",sum);
    return 0; }
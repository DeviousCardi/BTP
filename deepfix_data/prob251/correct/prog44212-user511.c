#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    long int sum=0;
    if(x==0) return 0;
    if(m==1) {
        return 1; }
    else if(m==2 && x/3!=0) {
        return (x/3); }
    else {
        if(x/5!=0)
           {return sum=1+getways(x-5,2)+getways(x-5,1);}
        else return sum=0; } }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=3;i++) {
        sum=sum+getways(n,i); }
    printf("%d",sum);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3],l=0;
long getways(int x, int m) {
    int sum=0;
    if(sum==x)
    {   l++;
        return l; }
    if(m==1) {
        return 1; }
    else if(m==2)
    {sum=3;
    return sum+1||sum+3;}
    else if(m==3)
   { sum=5;
    return sum+1||sum+3||sum+5;} }
int main() {
    int n,i,y=1;
    long int p=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<3;i++) {
    p=getways(n,y);
    y=y+2;
    sum=sum+p; }
    return 0; }
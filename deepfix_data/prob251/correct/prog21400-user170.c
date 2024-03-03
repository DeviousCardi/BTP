#include <stdio.h>
#include <stdlib.h>
long *memarray[3],l=0,sum=0;
long getways(int x, int m) {
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
    sum=getways(n,3);
    printf("%ld",sum);
    return 0; }
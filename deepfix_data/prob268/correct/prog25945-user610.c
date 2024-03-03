#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int i,count1=0;
    if(x<0)
        return 0;
    if((x==0)||(m==1))
        return 1;
    for(i=m;i>0;i--) {
        count1=count1+getways((x-((2*i)-1)),i); }
    return count1; }
int main() {
    long int n,count=0;
    scanf("%ld",&n);
    count=count+getways(n,3);
    printf("%ld",count);
    return 0; }
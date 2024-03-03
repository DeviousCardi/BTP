#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x>=0) {
    if(m==1)
    return 1;
    if(m==2)
    return x/3;
    if(m==3) {
        if(x>=5)
        return getways(x-5,1)+getways(x-5,2)+getways(x-5,3); } } }
int main() {
    int n,tot_ways;
    int sum=0,i;
    scanf("%d",&n);
    tot_ways=getways(n,3);
 printf("%d",tot_ways+n/3);
    return 0; }
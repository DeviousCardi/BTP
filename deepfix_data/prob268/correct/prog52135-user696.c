#include <stdio.h>
#include <stdlib.h>
long memarray[3];
long getways(int x, int m);
int main() {
    int n,no_of_ways;
    scanf("%d",&n);
    memarray[0]=getways(n,1);
    memarray[1]=getways(n,2);
    memarray[2]=getways(n,3);
    no_of_ways=memarray[1]+memarray[2]+memarray[3]+1;
    printf("%d",no_of_ways);
    return 0; }
long getways(int x, int m) {
    int count=0,i,j;
    if(m==1) {
    count=1;
    return count; }
    if(m==2) {
        return (x/3); }
    if(m==3) {
        for(i=1;i<=3;i++) {
            for(j=1;j<=x/5;j++) {
                count=count+getways(x-5*j,i); } }
     return count; } }
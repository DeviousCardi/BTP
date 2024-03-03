#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int a,b,i,sum=0;
    if(m==1){
        return 1; }
    if(m==2){
        for(i=1;i<=(x/3);i++){
            a=3*i;
            sum=sum+getways(x-a,1); }
        return sum; }
    if(m==3){
        for(i=1;i<=(x/5);i++){
            a=5*i;
            sum=sum+getways(x-a,2); }
        return sum; } }
int main() {
    int n,total;
    scanf("%d",&n);
    total=getways(n,1)+getways(n,2)+getways(n,3);
    printf("%d",total);
    return 0; }
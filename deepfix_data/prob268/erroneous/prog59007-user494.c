#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long ways=0;
long temp=0;
long getways(int x,int y) {
    long p=0;
    if(x==1||x==2) {
        return 1; }
    else if(x==0) {
        return 0; }
    if(y==1) {
        return 1; }
    else if(y==2) {
        p=x/3;
        if(x%3==0)
        temp+=p+1+getways(x-3*(x/3),1);
        else
        temp+=p+getways(x-3*p,1); }
    else if(y==3) {
        p=x/5;
        for(int i=p;i>0;i--) {
            temp+=getways(x-5*i,2); } }
    return temp; }
int main() {
    long n;
    scanf("%ld",&n);
    ways=ways+getways(n,1);
    temp=0;
    ways=ways+getways(n,2);
    temp=0;
    ways=ways+getways(n,3);
    printf("%
    return 0; }
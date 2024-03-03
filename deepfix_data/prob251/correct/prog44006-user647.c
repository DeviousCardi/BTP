#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count;
int check(int val){
    if(val>=5){
        return 3; }
    else if(val<=2){
        return 1; }
    else{
        return 2; } }
long getways(int x, int y) {
    int i,j;
    if(x==0){
        count++;
        return 0; }
    else{
        if(y==3){
            int val,temp;
            val=x-5;
            temp=check(val);
            getways(val,temp);
            getways(x,2);
            y=3; }
        if(y==2){
            int val,temp;
            val=x-3;
            temp=check(val);
            getways(val,temp);
            getways(x,1);
            y=2; }
        if(y==1){
           int val,temp;
           val=x-1;
            temp=check(val);
            getways(val,1); } } }
int main() {
    long n;
    int z;
    scanf("%ld",&n);
    z=check(n);
    getways(n,z);
    printf("%d",count);
    return 0; }
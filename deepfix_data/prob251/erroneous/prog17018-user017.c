#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0){
        return 1; }
    int r;
    switch(m){
        case 3:r=x-5;
               if(r>=5){
                   return getways(x-5,3)+getways(x-3,2)+return getways(x-1,1); }
               else if(r>=3){
                   return getways(x-3,2)+return getways(x-1,1); }
               else{
                   return 1; }
        case 2:r=x-3;
               if(r>=3){
                   return getways(x-3,2)+return getways(x-1,1); }
               else{
                   return 1; }
        case 1:return 1; } }
int main() {
    int n,m;
    scanf("%d",&n);
    if(n>=5){
        m=3; }
    else if(n>=3){
        m=2; }
    else m=1;
    printf("%ld",getways(n,m));
    return 0; }
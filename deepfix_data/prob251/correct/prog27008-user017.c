#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0){
        return 0; }
    if(x==0){
        return 1; }
    switch(m){
        case 3:if(x>=5){
                   return (getways(x-5,3)+getways(x-3,2)+1); }
               else if(x>=3){
                   return (getways(x-3,2)+1); }
               else{
                   return 1; }
        case 2:if(x>=3){
                   return (getways(x-3,2)+1); }
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
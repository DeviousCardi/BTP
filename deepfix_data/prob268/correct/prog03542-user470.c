#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int p,q,r;
    if(x==1){
        printf("1"); }
    else if(x==3){
        printf("2"); }
    else if(x==5){
        printf("3"); }
    else{
       p=getways(x-1,m)+getways(x-3,m)+getways(x-5,m)+6; } }
int main() {
    int n;
    scanf("%d",&n);
    return 0; }
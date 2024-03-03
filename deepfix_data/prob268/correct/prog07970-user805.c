#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)
    return 0;
    if(m==1){
        return 1; }
    if(m==2){
        return getways(x-3,1)+getways(x-3,2); }
    if(m=3){
        return getways(x-5,1)+getways(x-5,2)+getways(x-5,3); } }
int main() {
    int a,b;
    scanf("%d",&a);
    b=getways(a,1)+getways(a,2)+getways(a,3);
    printf("%d",b);
    return 0; }
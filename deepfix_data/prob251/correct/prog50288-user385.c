#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==0) {
        return 1; }
    if(m>=5) {
        return getways(x,m-5)+getways(x,m-3)+getways(x,m-1); }
    else if(m>=3 && m<5) {
        return getways(x,m-3)+getways(x,m-1); }
    else {
        return getways(x,m-1); } }
int main() {
    int x;
    scanf("%d",&x);
    printf("%d ",getways(x,x));
    return 0; }
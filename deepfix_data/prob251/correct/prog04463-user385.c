#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int m) {
    if(m==0) {
        return 1; }
    else{
    if(m>=5) {
        return getways(m-5)+getways(m-3)+getways(m-1); }
    else if(m>=3 && m<5) {
        return getways(m-3)+getways(m-1); }
    else if(m>0) {
        return getways(m-1);
    }} }
int main() {
    int x;
    scanf("%ld",&x);
    printf("%ld ",getways(x));
    return 0; }
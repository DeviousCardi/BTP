#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n, int x) {
    if(n==0) return 1;
    if(n<0)return 0;
    if(n<3) {
     if(x>1) {
     return 0; } }
    if(n<5) {
        if(x>2) return 0; }
    if(x==1) {
        printf("x=1  +1\n");
         return 1; }
    if(x==2) {
       printf("x=2  +1\n");
        return getways(n-3,1)+getways(n-3,2); }
    if(x==3) {
        int rem = n%5;
       return getways(n-5,1)+getways(n-5,2)+getways(n-5,3); } }
int main() {
    int n;
    scanf("%d",&n);
    long ways = getways(n,1)+getways(n,2)+getways(n,3);
    printf("%ld",ways);
    return 0; }
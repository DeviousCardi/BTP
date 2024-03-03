#include <stdio.h>
#include <stdlib.h>
int power(int x,int y) {
    int pow=1,i;
    for(i=0;i<y;i++) {
        pow=pow*x; }
    return pow; }
int tower(int n,char a,char b,char c) {
    int count=0;
    if(n==1) {
        return 1; }
    else {
    count=count+1;
    return tower(n-1,b,a,c); }
    return count; }
int main() {
    int t,k,i,array[20],count=0;
    char a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&array[i]); }
    for(i=0;i<t;i++) {
        printf("%d\n",tower(array[i],a,b,c)); }
    return 0; }
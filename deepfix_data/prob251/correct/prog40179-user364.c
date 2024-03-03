#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0;
long getways(int n, int count,int cal) {
    if(cal>n) {
        return 0; }
    if(cal==n) {
        count++;
        return 0; }
    return getways(n,count,cal+1)||getways(n,count,cal+3)||getways(n,count,cal+5); }
int main() {
    int n;
    long val;
    scanf("%d",&n);
    val=getways(n,0,0);
    printf("%ld",val);
    return 0; }
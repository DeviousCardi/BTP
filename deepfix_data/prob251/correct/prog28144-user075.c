#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x>5) {
        memarray[0]=memarray[1]=memarray[2]=0; } }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i+=5) {
        sum+=(n-i)/3+1; }
    printf("%d",sum);
    return 0; }
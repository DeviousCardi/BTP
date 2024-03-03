#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n, int m) {
    int z=0,i;
    int a = n/m;
    for(i=0;i<(a+1);i++){
        z = z+(n-m*i)/3+1; }
    printf("%d",z);
   return 0; }
int main() {
    int n;
    scanf("%d",&n);
    getways(n,5);
    return 0; }
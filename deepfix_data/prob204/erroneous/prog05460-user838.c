#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int digit(long int k) {
    scanf("%ld",&k);
    int i,value;
    i=1;
    while((k%(pow(10,i))!=0) {
        i=i*10; }
    value=i+1;
    return value; }
int main() {
    long int i,n;
    scanf("%ld",&n);
    int x[100],y[100]
    digit(n)=d;
    for(i=d-1;i<0;i--) {
        x[i]=(n-(n%pow(10,i)));
        y[i]=x[i]/pow(10,i); }
    for(i=0;i<d/2;i++) {
       if(y[i]!=y[d-i]) {
         printf("NO");
         return 0; } }
    printf("YES");
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int getways(int x, int m) {
    if(m==1) {
         return 1; }
    else if(m==2) {
         return (x/3)+1; }
    else {
         if(x<5) {
              return getways(x,2); }
         else {
              long int j=getways(x,2);
              long int i=getways(x-5,3);
              return i+j; } } }
int main() {
    int n;
    scanf("%d",&n);
    long int p=getways(n,3);
    printf("%d",p);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3],i=0;
memarray[0]=(long *)malloc(100*sizeof(long));
memarray[1]=(long *)malloc(100*sizeof(long));
memarray[2]=(long *)malloc(100*sizeof(long));
long getways(int x, int m) {
    if(x==0) {
        i++;
        return i; }
    if(m==3) {
       if(x>=5) {
           return getways(x%5,3); }
       if(x<5&&x>=3) {
           return getways(x%3,2); }
       if(x<3) {
           return getways(x-1,1); } }
    if(m==2) {
      if(x==0) {
          i++
          return i; }
      if(x<5&&x>=3) {
           return getways(x%3,2); }
       if(x<3) {
           return getways(x-1,1); } }
    if(m==1) {
       return 1; } }
int main() {
    long int x,sum=0;
    scanf("%ld",&x);
    for(int i=1;i<=3;i++) {
        sum+=getways(x,i); }
    printf("%d",sum);
    return 0; }
#include <stdio.h>
#include <stdlib.h>
long *memarray[3],i=0;
long getways(int x, int m) {
    if(x<0) {
        return 0; }
    if(m==3) {
         if(x==0) {
        i++;
        return i; }
       if(x>=5) {
           return getways(x-5,3)+getways(x-3,2)+getways(x-1,1); }
       if(x<5&&x>=3) {
           return getways(x-3,2)+getways(x-1,1); }
       if(x<3) {
           return getways(x-1,1); } }
    if(m==2) {
      if(x==0) {
          i++;
          return i; }
      if(x<5&&x>=3) {
           return getways(x%3,2); }
       if(x<3) {
           return getways(x-1,1); } }
    if(m==1) {
       return 1; } }
int main() {
    long int x,sum=0;
    scanf("%ld",&x); {
        sum+=getways(x,3); }
    printf("%ld",sum);
    return 0; }
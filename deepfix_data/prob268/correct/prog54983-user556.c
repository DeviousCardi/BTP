#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int count=0;
long getways(int x, int m) {
if(x<5&&m==3) {
    count+=getways(x,2); }
 if(x<3||m==2) {
 return 1;}
    if(m==2) {
      count+=getways(x-3,2)+1; }
    if(m==3) {
        count+=getways(x-5,3)+getways(x-5,2)+getways(x-5,1); } }
int main() {
    int n;
    scanf("%d",&n);
    long y=getways(n,3);
    printf("%d",count);
    return 0; }
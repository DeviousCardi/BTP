#include <stdio.h>
void sort(long int,long int[]);
int main() {
    double rank,a,b;
    long int n,i,j;
    scanf("%ld",&n);
    double bid[n];
    for(i=0;i<n;i++) {
        scanf("%lf",&bid[i]); }
   for(i=0;i<n;i++) {
       rank=0;
       for(j=0;j<n;j++) {
           if(bid[i]<bid[j]) {
               rank++; } }
       if(n/2!=0) {
           if(rank==(n-1)/2) {
               printf("%lf",bid[i]);
               break; } }
           else if(n%2==0) {
               if(rank==(n/2)-1) {
                   a=bid[i]; }
               if(rank==(n/2)+1) {
                   b=bid[i]; } } }
   if(n%2==0) {
       printf("%lf",(a+b)/2); }
    return 0; }
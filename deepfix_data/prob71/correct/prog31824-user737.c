#include <stdio.h>
void sort(long int,long int[]);
int main() {
    long int n,i,rank,j,a,b;
    scanf("%ld",&n);
    printf("%ld\n",n);
    long int bid[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&bid[i]); }
   for(i=0;i<n;i++) {
       rank=0;
       for(j=0;j<n;j++) {
           if(bid[i]<bid[j]) {
               rank++; } }
       if(n%2!=0) {
           if(rank==n/2) {
               printf("%ld",bid[i]);
               break; }
           else if(n%2==0) {
               if(rank==(n-1)/2) {
                   a=bid[i]; }
               if(rank==(n+1)/2) {
                   b=bid[i]; } } } }
   if(n%2==0) {
       printf("%d",(a+b)/2); }
    return 0; }
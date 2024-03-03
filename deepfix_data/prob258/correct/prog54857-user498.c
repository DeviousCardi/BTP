#include <stdio.h>
#include <stdlib.h>
int main()
{   int A[20],n,i,c=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
         scanf("%d\n",&A[i]); }
    for(i=0;i<n;i++)
       {  if (i==0) {
               if(A[i]>A[i+1]) {
                   c=c+1;
                  i++;
                  break; } }
          else if (i==n-1) {
                    if(A[i]>A[i-1]) {
                          c=c+1;
                          i++;
                          break; } }
          else if( (A[i]>A[i-1]) && (A[i]>A[i+1])) {
                    c=c+1;
                    break; } }
       if (c==0) {
           printf("No"); }
       else if(c>0) {
           printf("Yes"); }
    return 0; }
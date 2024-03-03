#include <stdio.h>
#include <stdlib.h>
int main()
{   int A[20],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
         scanf("%d\n",&A[i]); }
    for(i=0;i<n;i++)
       {  if (i==0)
             { i++;
               continue; }
           if( A[i]>A[i-1]&& A[i]>A[i+1])
                 printf("Yes");
          else
                printf("No"); }
    return 0; }
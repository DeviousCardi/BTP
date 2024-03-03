#include <stdio.h>
#include <stdlib.h>
int fib(int num) {
    if(num==0||num==1)
    return 1;
    else
    return fib(num-1)+fib(num-2); }
int b_search(int arr[20],int beg,int last,int key) {
    int mid;
    mid=(beg+last)/2;
    if(arr[mid]==key) {
        return 1; }
    else if(arr[mid]>key) {
        last=mid-1;
        return b_search(arr,beg,last,key); }
    else
    {   beg=mid+1;
        return b_search(arr,beg,last,key); } }
int main()
{int t,z,i,j,A[20],k,start,end;
for(i=0;i<20;++i)
{   A[0]=0;
    A[i+1]=fib(i);
   int y=fib(i);
    printf("%d",y); }
 scanf("%d",&t);
 start=0;
 end=t-1;
 for(j=0;j<t;++j) {
      scanf("%d",&k);
      z=b_search(A,start,end,k);
      if(z==1) {
          printf("yes\n"); }
      else
      printf("no\n"); }
     return 0; }
#include<stdio.h>
#include<strings.h>
int main() {
    int N,arr[N],start=0,end=N-1,j;
    scanf("%d\n",&N);
    for(i=0;i<N;i++)
    scanf("%d ",arr[i]); }
    int rev(int start,int end){
    if(start!=end||start!>end)
   { temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    return rev(start+1,end-1);} }
   for(j=0;j<N;j++)
   printf("%d ",arr[j]);
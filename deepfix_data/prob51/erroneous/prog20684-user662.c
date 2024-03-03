#include <stdio.h>
int larg( int a[],int  start,int end) {
    if(start==end)
     return 0;
     int max=0;
     int x;
     x=max(a[],start,end);
     swap(a[],x,start);
     larg(a[],start+1,end); }
swap(int a[],int i,int j) {
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp; }
int main() {
   int N,K=,i,j;
   scanf("%d%d",&N,&k);
    int a[1000];
    int temp[1000];
    for(i=0;i<=N;i++) {
        scanf("%d",&a[i]); }
    int larg(a[1000],0,3);
    return 0; }
#include <stdio.h>
int retr;
 int larg(int  a[],int  start,int end) {
    if(start==end)
    return 0;
    int retr=0;
    retr = max( a, start, end);
    swap(a[100000],retr,start);
    larg( a[100000], start+1, end); }
int max(int a[],int i,int start,int end) {
    int retr=0;
    while(i=start && i<=end) {
        if(a[i]>retr)
         retr=a[i];
        i++;
        return retr; } }
 int swap( int a[],int i,int j) {
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp; }
int main() {
   int N,i,j=0;
   int k=0;
   scanf("%d %d",&N,&k);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
     larg(a,0,N-1);
    printf("%d",a[1]);
    return 0; }
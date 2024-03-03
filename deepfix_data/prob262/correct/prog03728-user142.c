#include<stdio.h>
#include<strings.h>
int getReverse(int[],int,int);
int main() {
   int n,rev,i,mid;
    scanf("%d",&n);
   if(n%2==0){
   mid=n/2; }
   else
   mid = (n+1)/2;
   mid=mid-1;
    int ar[n];
    for(i=0;i<n;i++) {
    scanf("%d",&ar[i]); }
  for(i=0;i<n;i++) {
    rev = getReverse(ar,i,mid);
    printf("%d",rev); }
    return 0; }
  int n;
  int getReverse(int ar[0],int i,int mid) {
     int n,rev,temp;
     temp=ar[i];
     ar[i]=ar[n-i-1];
     ar[n-i-1]=temp;
   i=i+1;
   if(mid>i) {
    rev = getReverse(ar,i,mid); }
      return rev; }
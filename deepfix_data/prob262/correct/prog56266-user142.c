#include<stdio.h>
#include<strings.h>
void getReverse(int[],int,int);
int main() {
   int n,i,mid;
    scanf("%d",&n);
   if(n%2==0){
   mid=n/2; }
   else
   mid = (n+1)/2;
   mid=mid-1;
    int ar[n];
    for(i=0;i<n;i++) {
    scanf("%d",&ar[i]); }
     getReverse(ar,i,mid);
  for(i=0;i<n;i++) {
    printf("%d",ar[i]); }
    return 0; }
  int n;
  void getReverse(int ar[],int i,int mid) {
     int n,temp;
     temp=ar[i];
     ar[i]=ar[n-i-1];
     ar[n-i-1]=temp;
   i=i+1;
   if(mid>i) {
    getReverse(ar,i,mid); }
      return; }
#include <stdio.h>
int n;
int utilarr[30];
void check(int n,int arr[],int s,int i) {
 if(i==n+1) {
     return; }
 int p=checksum(n,arr,s,i,0);
 if(p==1) {
     printf("YES");
     return; }
 else {
     check(n,arr,s,i+1); } }
int checksum(int n,int arr[],int s,int i,int k)
{if(k==i+1)
 {int sum=0;
  int r=0;
  for(r;r<=i-1;r++) {
   sum=sum+utilarr[r]; }
  if(sum==s) {
      return 1; }
  else {
      return 0; } }
  int j=k;
  for(j;j<=n-1;j++) {
     utilarr[k]=arr[j];
    int y=checksum(n,arr,s,i,k+1);
    return y; } }
int main() {
   int n,s;
   scanf("%d %d",&n,&s);
   int arr[n];
   int i=0;
   for(i;i<=n-1;i++) {
      scanf("%d",&arr[i]); }
   check(n,arr,s,1);
    return 0; }
#include <stdio.h>
int n;
int utilarr[30];
void check(int n,int arr[],int s,int i) {
 if(i==n+1) {
     return; }
 int p=checksum(n,arr,s,i,0);
 if(p==1) {
     return; }
 else { } }
int checksum(int n,int arr[],int s,int i,int k)
{if(k==i) {
  int o=0;
  for(o;o<=i-1;o++) {
      printf("%d ",utilarr[o]); } }
  int j=k;
  for(j;j<=n-1;j++) {
     utilarr[k]=arr[j];
    int y=checksum(n,arr,s,i,k+1); } }
int main() {
   int n,s;
   scanf("%d %d",&n,&s);
   int arr[n];
   int i=0;
   for(i;i<=n-1;i++) {
      scanf("%d",&arr[i]); }
   checksum(n,arr,s,3,0);
    return 0; }
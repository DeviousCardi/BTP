#include <stdio.h>
int rot(int n,int arr[],int d);
int main() {
    int n,d,l,i;
    int arr[500];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
    for(i=0;i<n;i++){
        l=rot(n,arr,d); }
      printf("%c",'pr[i]');
  return 0; }
int rot(int n,int arr[],int d){
     int i,m;
      for(i=0;i<n;i++){
        if(i<d){
            m=arr[n-1+i-d]; }
        else{
             m= arr[i-d]; } }
 return m; }
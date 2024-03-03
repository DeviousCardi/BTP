#include <stdio.h>
 int rot(int arr[],int d, int n){
     int i,m;
      for(i=0;i<n;i++){
        if(i<d){
            m=arr[n+i-d]; }
        else{
             m= arr[i-d]; } }
 return m; }
int main() {
    int n,d,i;
    int arr[500];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
    for(i=0;i<n;i++){
      printf("%d",rot(&arr[n],d,n)); }
    return 0; }
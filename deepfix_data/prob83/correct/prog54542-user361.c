#include <stdio.h>
 int rot(int arr[],int d, int n){
     int i,m=0;
      for(i=0;i<n;i++){
        if(i<d){
            m=arr[n-1+i-d]; }
        else{
             m= arr[i-d]; } }
 return m; }
int main() {
    int n,d,m,i;
    int arr[500];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
    for(i=0;i<n;i++){
       m=rot(&arr[n],d,n);
      printf("%d",m); }
    return 0; }
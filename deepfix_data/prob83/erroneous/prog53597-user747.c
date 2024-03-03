#include <stdio.h>
int right_rotate_the_array
 (int s[],int size){
     int a,d,n;
     int i,j,k;
     scanf("%d\n",n);
     for(i=0;i<n;i++){
         scanf("%d ",s[i]);
         count=count+1; }
     scanf("%d",d);
     for(j=0;j<n-d;j++){
         for(k=n;k<n+d;k++){
             s[k]=s[j]; } }
     return count; }
int main() {
    int m[n];
  right_rotate_the_array(m,n)
  for(i=n-d;i<n+d;i++){
      printf("%d ",m[i]); }
    return 0; }
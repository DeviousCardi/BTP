#include <stdio.h>
int rot(int n,int temp,int b[]) {
    int i,x,j;
    x=b[n-1];
    for(i=0;i<temp;i++) {
        for(j=0;j<n-1;j++)
         b[n-j]=b[n-j-1]; } }
int main() {
  int n,d,i,arr[1000],temp;
  scanf("%d ",&n);
  for(i=0;i<=n;i++)
   scanf("%d",&arr[i]);
   scanf("%d",&d);
   temp=d%n;
   if(temp==0){
      for(i=0;i<n;i++)
   printf("%d ",arr[i]);}
   else {
       rot(n,temp,arr);
       for(i=0;i<=n;i++)
        printf("%d ",arr[i]); }
    return 0; }
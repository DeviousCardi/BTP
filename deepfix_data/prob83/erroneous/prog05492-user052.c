#include <stdio.h>
int rot(int n,int temp,int b[]) {
    int i,x;
    x=a[0];
    for(i=0;i<n;i++) {
        if(i-temp>=0)
         a[i]=a[i-temp+n+1];
        else if
          a[i]=x
        else
         a[i]=a[i-temp]; } }
int main() {
  int n,d,i,arr[1000],temp;
  scanf("%d ",&n);
  for(i=0;i<=n;i++)
   scanf("%d",&arr[i]);
   scanf("%d",&d);
   temp=d%6;
   if(temp==0){
      for(i=0;i<n;i++)
   printf("%d ",arr[i]);}
   else {
       rot(n,temp,arr);
       for(i=0;i<=n;i++)
        printf("%d",arr[i]); }
    return 0; }
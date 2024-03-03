#include <stdio.h>
int swep(int a,int b){
    int k;
    a=k;
    a=b;
    b=k;
    return a,b; }
int main()
{int n,k;
scanf("%d%d\n",&n,&k);
int a[n];
  for(int i=0;i<n;i++){
      scanf("%d",&a[i]); }
 for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         if(a[j]>a[i]){
             swep(a[i],a[j]); } } }
    return 0; }
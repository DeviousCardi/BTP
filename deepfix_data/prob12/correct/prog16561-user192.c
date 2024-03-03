#include <stdio.h>
#include <math.h>
int main()
{ int i,j,n,k,m,d,a=0,min;
  int num[500];
  int flag[600];
  scanf("%d",&n);
  for(i=0;i<2*n;i++) {
    scanf("%d",&num[i]); }
  for(k=0;k<2*n;k++) {
  for(j=0;j<2*n;j++) {
        if(num[k]==num[j]&&k!=j)
        { flag[a]=(j-k>0?j-k:k-j);
         a++; } } }
  for(m=0;m<n;m++)
  {  min=flag[m];
  for(d=m;d<m;d++) {
    if(flag[m]>flag[d]){
        min=flag[d]; } } }
  printf("%d",min);
    return 0; }
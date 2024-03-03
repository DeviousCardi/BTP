#include <stdio.h>
int main()
{ int i,j,n,k,m,d,a=0;
  int num[200];
  int flag[100];
  scanf("%d",&n);
  for(i=0;i<2*n;i++) {
    scanf("%d",&num[i]); }
  for(k=0;k<n;k++) {
  for(j=n;j<2*n;j++) {
        if(num[k]==num[j])
        { flag[a]=j-k;
         a++; } } }
  for(m=0;m<n;m++)
  {  min=flag[m]
  for(d=m;d<m;d++) {
    if(flag[m]>flag[d]){
        min=flag[d]; } } }
    return 0; }
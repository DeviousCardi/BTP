#include <stdio.h>
int main() {
    int i,n;
    int x=0;
    int A[20];int B[20];
    int count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {scanf("%d",&A[i]);}
  int j=0;
  for(i=0;i<n;i++)
  {for(j=0;j<n;j++){
  if
  (A[i]==A[j]) {
      count=count+1; }
  else
    {continue;}}
       B[i]=count; }
   for(i=0;i<n;i++){
    if(B[i]==A[i])
      {  x=1;}
        else{ break;}}
        if(x==1)
       { printf("Yes");}
        else {printf("No");}
 return 0; }
#include <stdio.h>
int main() {
    int i,n;
    int A[20];int B[20];
    int count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {scanf("%d",&A[i]);}
  int j=0;
  for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
  if(A[i]==A[j]) {
      count=count+1;
     B[i]=count; }
    {  else
    continue;}}
    if(B[i]==A[i]){
        printf("yes");}
        else {printf("No");} } }
    return 0; }
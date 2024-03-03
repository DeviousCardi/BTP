#include <stdio.h>
int main(){
  int f,i,b,v,k,j;
  scanf("%d\n",&f);
  int a1[f],a2[f];
  for(b=0;b<f;b++){ scanf("%d ",&a1[b]);}printf("\n");
  for(v=0;v<f;v++){scanf("%d ",&a2[v]);}
  for(i=0;i<f;i++) {
    for(j=0;j<=i;j++){ if(a2[j]==i)
    { printf("%d ",a1[j]);} }
    printf("end");
    return 0; }
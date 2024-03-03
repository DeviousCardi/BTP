#include <stdio.h>
int main(){
  int f,i,b,v,k,j;
  scanf("%d\n",&f);
  int a1[f],a2[f];
  for(b=0;b<f;b++){ scanf("%d ",&a1[b]);}printf("\n");
  for(v=0;v<f;v++){scanf("%d ",&a2[v]);}
  for(i=0;i<f;i++){ a1[i]=a2[i];}
  for(j=0;j<f;j++){ for(k=0;k<f;k++) { if(a2[k]==j){ printf("%d ",&a1[k]);}} }
    printf("end");
    return 0; }
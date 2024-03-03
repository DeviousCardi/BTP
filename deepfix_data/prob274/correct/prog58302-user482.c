#include <stdio.h>
int main(){
    int N=0;
    scanf("%d",&N);
    int a[N];
    int i=0;
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    int b[5*N];
    b[0]=1;
    int j=0;
    for(j=1;j<5*N;j++){b[j]=0;}
    int k=0;
    for(k=0;k<5*N;k++) {
        b[k+1]=a[(b[k])-1]; }
    int output1=0;
    int output2=0;
    int n1=0;
    int n2=0;
    for(n1=0;n1<5*N;n1++) {
     if(output1==0) {
      for(n2=n1;n2<5*N;n2++) {
          if(b[n2]==b[n1]) {
             output1=n2-1;
             output2=n2-n1;
              printf("%d %d",(n2-1),(n2-n1));
              break; } } } }
    return 0; }
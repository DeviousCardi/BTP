#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
      int t=1,p=1,q=0;
      for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(a[i]!=a[j]) {
                t++; }
            if(t>2) {
               b[q]=a[j];
               q++; } } }
      for(int i=t-1,j=0;i>=1,j<t;i--,j++) {
          b[i]=a[j]; }
      for(int i=0;i<n;i++) {
          for(int j=0;j<n;j++) {
          if(b[j]!=b[i]) {
              p++; }
          else {
              printf("%d %d",t,p); } } } }
    return 0; }
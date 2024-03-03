#include <stdio.h>
int main() {
  int n,l,i,j,k,m,t,s;
  scanf("%d\n",&n);
  int a[n];
  for(l=0;l<n;l++){
      scanf("%d",&a[l]); }
  int sum[n];
  for(i=0;i<n;i++){
      int c=1;
      if(i>0){
          for(k=i-1;k>=0;k--){
              if(a[i]==a[k]){
                  c=0;
                  break; }
          }}
       if(c==1){
           sum[i]=1;
           for(m=i+1;m<n-1;m++){
               sum[m]=1;
               if(a[i]==a[m]){
                  sum[i]=sum[i]+1; } }
           for(t=i+1;t<n-1;t++){
            if(a[i]==a[t]){
                sum[t]=sum[i]; } } }
       else break; }
      int b=1;
      for(s=0;s<n;s++){
          if(a[s]!=sum[s]){
              b=0;
              break; } }
      if(b==1) printf("Yes");
      else printf("No");
    return 0; }
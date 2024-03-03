#include <stdio.h>
int main() {
    int n,i,j,count=0,flag=0;
    char a[100];
    int m;
    scanf("%d",&n);
    for (i=0;i<(2*n)+1;i=i+1){
        scanf("%c",&a[i]);
        if (a[i]==','){
            i--;
            continue; } }
  for (j=1;j<=n;j++){
      m=a[j]-'0';
      printf("%d",m);
      for (i=j+1;i<=n;i++){
          if (a[i]==m){
              count=count+1; } }
      if (count==m-1){
          continue; }
      else{
          printf("No");
          flag=1;
          break; } }
  if (flag!=1){
      printf("Yes"); }
    return 0; }
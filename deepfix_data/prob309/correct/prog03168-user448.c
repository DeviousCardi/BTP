#include <stdio.h>
int main() {
    int n,i,j;
    char a[100];
    scanf("%d",&n);
    for (i=0;i<(2*n)+1;i=i+1){
        scanf("%c",&a[i]);
        if (a[i]==','){
            i--;
            continue; } }
  for (j=0;j<=n;j++){
      printf(" %c %c",a[0],a[1]); }
    return 0; }
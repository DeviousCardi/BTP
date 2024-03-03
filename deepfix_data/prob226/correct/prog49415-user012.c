#include <stdio.h>
int main() {
    int d,n;
    int b[30];
    scanf("%d%d\n",&d,&n);
    for(int i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    for(int k=d;k>=1;k--)
   printf("%d\n",b[k]);
      return 0; }
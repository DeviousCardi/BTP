#include <stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    int a;
    scanf("%d",&a);
    int i;
    i=0;
    while(i<=a) {
        i=i+1; }
    if (2*a-1>k)
      printf("lucky");
    else
      printf("unlucky");
    return 0; }
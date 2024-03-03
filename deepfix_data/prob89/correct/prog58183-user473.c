#include <stdio.h>
int main() {
    int k;
    scanf("%d\n",&k);
    int a;
    scanf("%d",&a);
    int i;
    i=1;
    while(i<=a) {
        scanf("%d",&i);
        i=i+1; }
    if (2*a-1>k)
      printf("lucky");
    else
      printf("unlucky");
    return 0; }
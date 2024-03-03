#include <stdio.h>
int main() {
    int k;
    scanf("%d\n",&k);
    int a;
    scanf("%d",&a);
    int i;
    i=0;
    int n;
    n=a-1;
    int s[n];
    while(i<=a) {
        i=i+1;
        s[n]=i; }
    if (2*a-1>k)
      printf("lucky");
    else
      printf("unlucky");
    return 0; }
#include <stdio.h>
int main() {
    int k;
    scanf("%d\n",&k);
    int a;
    scanf("%d",&a);
    int i;
    i=0;
    int n;
    int s[n];
    n=a-1;
    while(i<=a) {
        i=i+1;
        s[n]=i; }
    if (2*a-1>k)
      printf("lucky");
    else
      printf("unlucky");
    return 0; }
#include <stdio.h>
int main() {
    int k,a;
    scanf("%d\n %d",&k,&a);
    int i;
    i=0;
    int n;
    n=a-1;
    int s[n];
    while(i<a) {
        i=i+1;
        s[n]=i;
        scanf("%d",&i); }
    if (2*a-1>k)
      printf("lucky");
    else
      printf("unlucky");
    return 0; }
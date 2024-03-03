#include <stdio.h>
int main() {
   char a;
    int i,n;
    scanf("%d",&n);
    int array[n];
    char gar=getchar();
    for (i=0;i<2*n-1;i++) {
        scanf("%c",&a);
        if (i%2==0)
       { int b=i/2;
         array[b]=a-'1'+1; } }
    for (i=0;i<n;i++)
    printf("%d\n",array[i]); }
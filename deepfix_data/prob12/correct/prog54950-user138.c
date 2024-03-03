#include <stdio.h>
int main() {
    int n;
    int i=2*n;
    scanf("%d",&n);
    int a[i];
    int k=1;
    for(int i=0;i<2*n;i++)
       {scanf("%d",&a[i]); }
    do
       {if(a[i]==a[i+k])
         printf("%d",k); }
    while(k<2*n);
    return 0; }
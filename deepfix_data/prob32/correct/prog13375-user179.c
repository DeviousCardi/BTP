#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    char c[21];
    scanf("%d\n",&n);
    for(i=0;i<=n-1;i++){
        scanf("%c\n",&c[i]);
        if(c[i+1]>c[i-1])
           if(c[i-1]>c[i])
               printf("Yes");
           else
               printf("No");
        else
           if(c[i+1]>c[i])
               printf("Yes");
           else
               printf("No"); }
    return 0; }
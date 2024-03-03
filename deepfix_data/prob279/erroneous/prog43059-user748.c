#include <stdio.h>
int main() {
    int n;
    int array[n];
     for(int i=1;i<=n;i++)
    scanf("%d",&array[i]); {
            for(int j=1;j<=n;j++);
         if(array[i]==array[j]) {
           printf("%d",i); }
         else {
             printf("%d",j); }
    return 0; }
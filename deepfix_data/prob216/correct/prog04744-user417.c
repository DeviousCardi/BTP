#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);
int main() {
    int i=0,c,n;
    scanf("%d",&n);
    for(c=0;c<n;c++) {
        printf("%d\n",fibonacci(i));
        i++; }
return 0; }
int fibonacci(int n) {
    if(n==0)
    return 0;
    else
    {  if(n==1)
       return 1;
       else
       return (fibonacci(n-1)+fibonacci(n-2)); } }
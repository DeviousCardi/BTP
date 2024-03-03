#include<stdio.h>
int sum(int n);
int main() {
int n;
scanf("%d" ,&n);
for(n=2;n<=100000;n++)
printf("%d" ,sum n);
return 0;
int sum(int n);
if(n!=0)
return n+sum (n-1);
    return 0; }
#include <stdio.h>
int a[100];
int n,i,k,c;
int swap(int d,int b){
c=d;
d=b;
b=c;
printf("%d",d);
return 1; }
int main()
{   int s,f;
s=3;
f=6;
swap(s,f);
return 0; }
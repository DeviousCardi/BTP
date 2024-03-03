#include <stdio.h>
int a[100];
int n,i,k,c;
int swap(int d,int b){
c=d;
d=b;
b=c;
return 1; }
int main()
{   int s,f;
s=3;
f=6;
swap(s,f);
printf("%d",s);
return 0; }
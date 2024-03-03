#include <stdio.h>
#include <stdlib.h>
void is_perfect(int);
int main() {
int n;
scanf("%d",&n);
if(n>0&&n!=1&&n!=0)
{is_perfect(n);}
return 0; }
void is_perfect(int n) {
int s,i;
s=0;
for(i=1;i<n;i++) {
if(n%i==0)
{s=s+i;} }
if(s==n)
{printf("YES");}
else
{printf("NO");} }
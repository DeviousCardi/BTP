#include<stdio.h>
#include<strings.h>
void function(int);
int main() {
    int n;
    scanf("%d ",&n);
    function(n);
    return 0; }
void function(int n)
{  int a;
   if(n>0)
   {scanf("%d",&a);
    n=n-1;
   function(n); }
   else return;
   printf("%d ",a); }
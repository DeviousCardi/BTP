#include <stdio.h>
#include <stdlib.h>
int checkperf(int n)
{ int i, sum = 1;
  for(i=2; i*i<=n; i++)
     { if(n%i==0)
         { sum = sum + i;
           sum = sum + n/i; } }
  if(sum==n)
    return 1;
  return 0; }
int main() {
	int num, f;
	scanf("%d", &num);
    if(num<=0)
	  { return 0; }
	f = checkperf(num);
	if(f==1)
	  { printf("YES"); }
	else printf("NO");
	return 0; }
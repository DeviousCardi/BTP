#include <stdio.h>
#include <stdlib.h>
void lmin(int s[], int size)
{ int i, f=0;
  for(i=1; i<size-1; i++)
     { if((s[i]<s[i-1])&&(s[i]<s[i+1]))
       { f=1;
         break; } }
  if(!f)
    { if(s[0]<s[1])
        {f=1; }
      else if(s[size-1]<s[size-2])
        f=1;
  if(f==1) { printf("Yes"); }
  else printf("No"); }
int main() {
	int a[20], n, i;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	   { scanf("%d", &a[i]); }
	lmin(a, n);
	return 0; }
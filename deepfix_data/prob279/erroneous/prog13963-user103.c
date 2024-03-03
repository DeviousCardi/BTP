#include <stdio.h>
int main()
{ int n, l, k, l;
scanf("%d", &n);
int i, n[n];
for(i=0; i<n; i++)
{scanf("%d", &n[i]);}
j=0, k=0;
again:
while(j<n)
  {  j++;
      while(j<n)
       {  k++;
           if(j!=k)
            {      if(n[j]==n[k])
                     goto print;
                    else
                     goto again; }
           else
           {goto again;} } }
 print:
 printf("%d", n[j]);
 l=1;
 re:
  while(l<=n)
 {   b=0;
     while(b<n) {
        if(l==n[b])
          l++;
          goto re;
          else
          b++; }
    if((b==(n-1))&&(b!=0))
     goto end; }
 end:
 printf("%d", l);
     return 0; }
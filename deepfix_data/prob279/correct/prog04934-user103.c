#include <stdio.h>
int main()
{ int n, l,j, k, b;
scanf("%d", &n);
int i, m[n];
for(i=0; i<n; i++)
{scanf("%d", &m[i]);}
j=0, k=0;
again:
while(j<n)
  {  j++;
      while(j<n)
       {  k++;
           if(j!=k)
            {      if(m[j]==m[k])
                     goto print;
                    else
                     goto again; }
           else
           {goto again;} } }
 print:
 printf("%d", m[j]);
 l=1;
 re:
  while(l<=n)
 {   b=0;
     while(b<n) {
        if(l==m[b])
         { l++;
          goto re;}
         else
         { b++;} }
    if((b==(n-1))&&(b!=0))
     goto end; }
 end:
 printf("%d", l);
     return 0; }
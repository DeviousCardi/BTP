#include <stdio.h>
int main() {
int n,m;
int i;
int count=0;
scanf ("%d %d",&m,&n);
for (i=2;i<m;i=i+1)
{if (m%i==0)
count =count+1;
else
count=count+0; }
{if (count==n)
printf ("YES\n");
else
printf ("NO\n");}
    return 0; }
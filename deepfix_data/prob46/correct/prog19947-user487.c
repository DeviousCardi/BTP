#include <stdio.h>
int main() {
int m,n;
int i;
int count=0;
scanf ("%d %d",&m,&n);
for (i=2;i<n;i=i+1)
{if (n%i==0)
count =count+1;
else
count=count+0; }
{if (count==m)
printf ("YES\n");
else
printf ("NO\n");}
    return 0; }
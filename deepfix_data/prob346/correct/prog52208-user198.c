#include <stdio.h>
int main()
{int s[1000],a,i,n,k,j;
scanf("%d",&n);
while(i<n)
    {scanf("%d",&a);
    if(a>=0&&a<=99)
        {s[i]=a;
        i++; }
    else
    continue ; }
for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    if(s[j]>=s[i])
      {k=s[j];
      s[j]=s[i];
      s[i]=k; } }
    for(i=0;i<n;i++)
    printf("%d ",s[i]);
    printf("end");
    return 0; }
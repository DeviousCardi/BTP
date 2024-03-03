#include <stdio.h>
int main()
{int a[100],i,j,n,m,x,ch;char b[100];
 scanf("%d",&n);
 for(i=0;i<n-1;i++)
 {scanf("%d",&a[i]);
  scanf("%c",&b[i]);}scanf("%d",&a[n-1]);
 for(i=0;i<n;i=i+1)
   {m=a[i];ch=0;
    for(i=0;i<n;i=i+1)
        {if(m==a[i])
           ch=ch+1;}
         if(ch!=m)
         {printf("No");break;
        if(i==n-1)
        printf("Yes"); } }
    return 0; }
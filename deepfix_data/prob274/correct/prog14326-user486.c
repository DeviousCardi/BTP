#include <stdio.h>
int main(){
    int i,j=1,k=0,t,n;
    scanf("%d",&n);
     int a[n+1],b[200];
     a[0]=0;b[0]=0;
     for(i=1;i<n+1;i++)
     scanf("%d",&a[i]);
     for(i=1;i<n+1&&j<200;i++)
     {a[i]=k;
      b[j]=k;
      i=k;
      j++; }
     t=200;
     for(j=1;j<200;j++)
     {for(i=j+1;i<200;i++)
      if(b[j]==b[i])
      {if(t>i-j)
       t=i-j; } }
     printf("%d",t);
     for(i=1;i<n;i++)
      {if(b[i]==b[t+i])
       {printf("%d",b[t+i-1]);
        break; } }
     return 0; }
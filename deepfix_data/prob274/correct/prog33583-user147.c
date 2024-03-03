#include <stdio.h>
int main(){
    int n,a[100],count=0,t=1,t1=0,t2=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {scanf("%d ",&a[i]);}
     int k=a[0],j=1;
     while(count<=3&&j<=n)
     {if(t==n&&count==1)
     {k=a[1];
     j=2;
     count=0;
     t=0; }
     if(a[j-1]==k)
     {count++;
     if(count==2)
     {t1=t;}
     if(count==3)
     {t2=t-t1;}}
     t++;
     j=a[j-1]; }
     printf("%d %d",t1,t2);
    return 0; }
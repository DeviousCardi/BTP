#include <stdio.h>
int main(){
    int n,a[100],count=0,t=0;
    scanf("%d\n",&n);
    for(int i=1;i=<n;i++)
    {scanf("%d ",&a[i]);}
     int k=a[1],j=1;
     while(count<=3&&j<=n)
     {if(a[j]==k)
     {count++;}
     if(count==2)
     {t1=t;}
     if(count==3)
     {t2=t-t1;}
     t++;}
     printf("%d %d",t1,t2);
    return 0; }
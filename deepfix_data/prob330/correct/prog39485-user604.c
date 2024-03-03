#include <stdio.h>
int main(){
 int n,i , a[100],ch;
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 for(i=1;i<(n-1);i++)
 {ch=0;
 if((a[i]>a[i-1])&&(a[i]>a[i+1]))
    ch=ch+1;}
    return 0; }
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
     {scanf("%d",&a[i]);}
    int flag=0;
    int count=0;
    for(int i=0;i<n;i++)
     {count=0;
      for(int j=0;j<n;j++)
       {if(a[i]==a[j]) {
             count++; } }
      if(count!=a[i])
       {flag=1;
        break; } }
    return 0; }
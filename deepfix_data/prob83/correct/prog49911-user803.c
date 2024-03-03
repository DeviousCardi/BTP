#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[1000];
    for(int i=0;i<n;i++)
     {scanf("%d",&a[i]);}
    int d;
    scanf("%d",&d);
    for(int j=0;j<d;j++)
     {int temp;
      for(int i=0;i<n-1;i++)
       {temp=a[0];
        a[0]=a[i+1];
        a[i+1]=temp;}}
    for(int i=0;i<n;i++)
     {printf("%d",a[i]);}
    return 0; }
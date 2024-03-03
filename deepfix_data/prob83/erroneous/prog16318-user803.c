#include <stdio.h>
int rotate(int a[1000],n)
 {int temp;
  for(int i=0;i<n-1;i++)
   {temp=a[0];
    a[0]=a[i+1];
    a[i+1]=temp;}
  return a; }
int main() {
    int n;
    int rotate(int a[],n);
    scanf("%d",&n);
    int a[1000];
    for(int i=0;i<n;i++)
     {scanf("%d",&a[i]);}
    int d;
    scanf("%d",&d);
    for(int i=0;i<d;i++)
     {a=rotate(a,n);}
    printf("%s",a);
    return 0; }
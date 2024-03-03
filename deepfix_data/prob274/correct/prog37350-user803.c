#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<n+1;i++)
     {scanf("%d",&a[i]); }
    int k;
    int t;
    int temp[n+1];
    int i=1;
    int count =0;
    while(a[i]!=0)
     {temp[i]=a[i];
      a[i]=0;
      i=temp[i];
      count++; }
    t=count;
    count=0;
    while(temp[i]!=0)
     {a[i]=temp[i];
      temp[i]=0;
      i=a[i];
      count++; }
    k=count;
    printf("%d %d",t,k);
    return 0; }
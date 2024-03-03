#include<stdio.h>
#define MAX 100
int main() {
    int k,sum=0;
    scanf("%d",&k);
    int n,i;
    scanf("%d",&n);
     int a[MAX];
     for(i=0;i<n;i++) {
         scanf("%d",&a[i]);
         sum = sum + a[i];
         a[i]=sum;
         if(sum==k)
         break;
     }if(sum!=k)
     printf("unlucky");
     else
     printf("lucky"); }
#include<stdio.h>
int n;
int maxsubseq(int a[],int b[],int i) {
   int h=0;
   for(int j=i+1;j<n;j++)
       if(a[j]>a[i] && b[j]>h)
           h=b[j];
    return h+1; }
int main() {
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
      scanf("%d",a+i);
    int s=1;
    b[n-1]=1;
    for(int i=n-2;i>=0;i--) {
            b[i]=maxsubseq(a,b,i);
            if(b[i]>s)
              s=b[i]; }
    printf("%d",s);
    return 0; }
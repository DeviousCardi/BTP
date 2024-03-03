#include<stdio.h>
int dif(int n,int num[]) {
    int j,sub[n-1],a=num[0];
    if (n==1)
    return num[0];
    else {
      for(j=0;j<n;j++)
      sub[j]=num[j+1];
      a=a-dif(n-1,sub);
      return a; } }
int main() {
    int i,n,num[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    printf("%d",dif(n,num));
    return 0; }
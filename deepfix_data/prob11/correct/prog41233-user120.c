#include <stdio.h>
int sum=0;
int main()
{   int n,t,p,j=0;
     scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",a[i]); }
    p=check(a,j,n,sum);
    if(p==t)
      printf("YES");
      else
      printf("NO");
    return 0; }
int check(int a[],int index,int size,int suma) {
    if(index==size-1)
       return 1;
       return check(a,index+1,size,suma+a[index]); }
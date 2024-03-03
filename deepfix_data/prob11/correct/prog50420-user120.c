#include <stdio.h>
int main()
{   int n,t,p;
     scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",a[i]); }
    p=check();
    if(p==t)
      printf("YES");
      else
      printf("NO");
    return 0; }
int check(int a[],int index,int size,int suma) {
    if(index==size-1)
       return 1;
       return check(a,index+1,size,suma+a[index]); }
#include <stdio.h>
int main(){
    int i,j=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {while(j<n)
     if((i==j&&a[i]==a[j]&&a[i]==1)||(i!=j&&a[j]==0))
     {j++;}
     else
     { printf("not");} }
    return 0; }
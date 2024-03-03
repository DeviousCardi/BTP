#include <stdio.h>
int main(){
    int a1[100];
    int a2[100];
    int n,i,j;
    a1[0]=getchar();
    a2[0]=getchar();
    scanf("%d",&n);
    for(i=0;i<n;i=i+1)
    {  a1[i]=getchar(); }
     for(j=0;j<n;j=j+1)
     { a2[j]=getchar();
    printf("%d",a2[j]);}
    return 0; }
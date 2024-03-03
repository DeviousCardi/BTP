#include<stdio.h>
int main()  {
    int n,array[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)  scanf("%d";&array[i]);
    int x[20];
    for(int i=0;i<n;i++)  x[i]=1;
    int a;
    for(int i=0;i<n;i++)  {
        a=array[i];
        for(int j=i+1;j<n;j++)  {
            if(a<array[j])  {
                x[i]=x[i]+1;
                a=array[j]; } } }
    a=x[0];
    for(int i=1;i<n;i++)  {
        if(x[i]>a)  a=x[i]; }
    printf("%d",a);
    return 0; }
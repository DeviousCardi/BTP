#include <stdio.h>
int minm (int a, int b)
{if(a>=b)
    return b;
    else return a; }
int main(){
    int n;
    scanf("%d",&n);
    scanf("\n");
    int arr[400];
    int a,count=0;
    a=getchar();
    for(int i=0;a!= EOF;i++)
    {arr[i]=a;count++;
    a=getchar();}
    int p[400];
    for(int i=0;i<(count-1);i++)
    {for(int j=0;j<(count-1);j++){
    if (arr[i]==arr[j]){
        p[i]=(j-i); } } }
    int min=400;
    for (int i=1;i<400;i++)
    {min= minm(min,p[i]);}
    printf("%d",min);
    return 0; }
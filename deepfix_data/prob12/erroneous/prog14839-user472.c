#include <stdio.h>
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
    int p[200];
    for(int i=0;i<(count-1);i++)
    {for(int j=0;j<(count-1);j++){
    if (a[i]==a[j]){p[i]=(j-i)} } }
    return 0; }
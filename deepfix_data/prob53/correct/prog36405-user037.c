#include<stdio.h>
int x=0;
int y;
int difrnc(int a[],int x,int n){
    if(x==n-1) return y;
    if(x==0){y=a[0];}
    y=y-a[x+1];
    return difrnc(a,x+1,n); }
int main() {
    int n,i;
    int j=0;
    scanf("%d\n",&n);
    int a[100000];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int result=difrnc(a,j,n);
    printf("%d",result);
    return 0; }
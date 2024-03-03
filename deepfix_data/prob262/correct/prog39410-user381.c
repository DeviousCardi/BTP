#include<stdio.h>
#include<strings.h>
int main() {
    int n;
     int a[n] ;
    scanf("%d",&a[n]);
    printf("%d",a[n]);
    Reverse();
    return 0; }
int Reverse() {
    int n;
    int a[n];
    scanf("%d",&a[n]);
    {if(a[n]!=0)
    Reverse();
    printf("%d",a[n]); }
    return Reverse() ; }
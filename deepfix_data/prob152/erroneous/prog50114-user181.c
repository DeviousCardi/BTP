#include<stdio.h>
int search(int start,int array[],int sum,int number) {
    if(number==0)
    return 0;
    else if(sum==0)
    return 1;
    else return(search(start+1,array,sum,number-1 )||search(start+1,array,sum-start,number-1)); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int s=0;
    for(int i=0;i<n;i++)
   { scanf("%d",&a[n]);
    s+=a[n];}
    if(s%2==1)
    printf("NO");
    else
    int d=search(0,a,s/2,n); }
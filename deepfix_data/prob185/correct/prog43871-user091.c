#include <stdio.h>
int find(int a[],int n,int sum)
{int s,i,j;
    for(i=0;i<n;i++) {
       s= sum-a[i];
       for(j=1+i;j<n-1;j++)
       if(a[i+1]>s) {
           continue; }
       else if(a[i+1]<=s) {
           s=s-a[i+1];
           if( s==0)
           return 1;
           else
          { continue;} } } }
void sort(int a[],int n)
{int i,temp;
    for(i=0;i<n-1;i++) {
        if(a[i+1]>a[i]) {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp; } } }
int main() {
    int n,m,i,sum=0,b;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
     sort(a,n) ;
    b= find(a,n,m);
    if(b==1)
   printf("YES");
    else
    printf("NO");
    return 0; }
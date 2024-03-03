#include <stdio.h>
int su=0;
int sum(int b[],int ,int ,int );
int main() {
    int n,s,a[100000];
    scanf("%d",&n);
    scanf("%d",&s);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
   if(sum(a,n,s,su)==1)
   printf("YES");
   else{
   printf("NO");}
    return 0; }
int sum(int b[],int n,int s,int su) {
    if(su==s) return 1;
    if(n==0) return 0;
    else return(sum(b,n-1,s,su+b[n]))||(sum(b,n-1,s,su)); }
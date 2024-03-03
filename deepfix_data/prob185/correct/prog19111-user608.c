#include <stdio.h>
int check(int a[],int n,int s,int i) {
    if(i<0&&s!=0) {
        return 0; }
    if(s==0) {
        return 1; }
    return check(a,n,s,i+1)||check(a,n,s-a[i],i+1); }
int main() {
    int n,s;
    scanf("%d%d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   int k= check(a,n,s,0);
   if(k==1)
   printf("YES");
   else
   printf("NO");
    return 0; }
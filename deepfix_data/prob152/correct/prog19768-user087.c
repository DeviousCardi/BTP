#include <stdio.h>
int a[30];
int find_sum(sum,start,end) {
    if(sum==a[start])
    return 1;
    else if(start==end&&a[start]!=sum)
    return 0;
    else
    return find_sum(sum-a[start],start+1,end)||find_sum(sum,start+1,end); }
int main() {
    int n;
    scanf("%d\n",&n);
    int sum=0;int i;
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        sum=sum+a[i]; }
    float k=sum/2.0;
    int j=k;
    if((k-j)!=0) {
        printf("NO");
        return 0; }
   int r= find_sum(k,0,n-1);
   if(r==0)
   printf("NO");
   else if(r==1)
   printf("YES");
   return 0;
    return 0; }
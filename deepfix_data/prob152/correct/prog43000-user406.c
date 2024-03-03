#include <stdio.h>
int sum(int a[],int start,int end) {
    if(start>end)   return 0;
    if(end==0)  return 0;
    else    return(a[start]+sum(a,start+1,end)); }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    int rsum,lsum;
    int flag;
    for(i=0;i<n-1;i++) {
       rsum=sum(a,i,n);
       lsum=sum(a,0,i);
        printf("%d %d\n",rsum,lsum);
       if(rsum==lsum) {
           flag=1;
           break; }
       else flag=0; }
    if(flag==1) {
        printf("YES"); }
    else    printf("NO");
    return 0; }
#include <stdio.h>
int arr[100]={0};
int n;
static int m=0;
int getMaxLessThan(int upperLimit)
{int i;
    for(i=0;i<n;i++) {
        if (arr[i]>m && arr[i]<upperLimit)
        m=arr[i]; }
    return m; }
int main() {
   int k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
     getMaxLessThan(1000);
    printf("%d\n",m);
    for(i=1;i<k;i++) {
    getMaxLessThan(m);
    printf("%d\n",m); }
    return 0; }
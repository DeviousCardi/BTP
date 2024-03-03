#include <stdio.h>
long int sum (long int[],int);
int n;
int main() {
    int i,j,k,flag;
    long int finalsum;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++); {
        scanf("%d" ,&a[i]); }
    finalsum=sum(a,n);
    if(finalsum%2==0) {
        for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        for(k=j;k<n;k++) {
        if (a[i]+a[j]+a[k]==finalsum/2)
      {  printf("YES");
        return 0; }
       else flag=1; }
    if(flag==1)printf("NO");
else printf("NO"); }
    return 0; }
long int sum (long int a[] ,int n) {
    static int j=0;
    static long int total=0;
    if(j=n) {
        return total; }
    total =total+a[j];
    j++;
    return sum (a,n); }
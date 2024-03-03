#include <stdio.h>
int main()
{int n,i,j;
int a[1000];
int sum =0;
int count=0;
scanf ("%d",&n);
for (i=0;i<n;i=i+1) {
    scanf ("%d",a[i]);
    sum=sum +a[i];
    if (a[i]==0)
    count=1; }
for (i=1;i<n;i=i+1) {
    for (j=0;j<n;j=j+1) {
        if (a[j]==i) {
            sum=sum-i*i;
            for (k=0;k<n;k=k+1) {
                if (a[k]==i)
                a[k]=0; }
            break; } } }
if ((sum==0)&&(count!=1)) {
    printf ("it is a super array"); }
else
printf ("it is not a super array");
return 0; }
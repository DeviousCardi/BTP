#include <stdio.h>
int main() {int i,k,j,n,n1,n2,min,max;
int a[999];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]); }
max=a[0];
n1=0;
for(j=1;j<n;j++){
    if(max<a[j])
   { max=a[j];
    n1=j;} }
n2=0;
for(k=1;k<n;k++){
    if(min>a[k]){
    min=a[k];
   n2=k;
}}
a[n1]=k;
a[n1]=a[n2];
a[n2]=k;
i=0;
for(i=0;i<n;i++)
{printf("%d",a[i]);}
    printf("end");
    return 0; }
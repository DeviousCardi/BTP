#include <stdio.h>
int main() {int i,k,j,n,n1,n2,min,max;
int a[999];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}max=a[0];
for(j=1;j<n;j++){
    if(max>a[j])
    {max=max;
    n1=n1;}
    else
   { max=a[j];
    n1=j; }
for(k=1;k<n;k++){
    if(min<a[k]){
    min=min;
    n2=n2;}
    else
   { min=a[k];
   n2=k; }
a[n1]=k;
a[n1]=a[n2];
a[n2]=k;
i=0;
for(i=0;i<n;i++)
{printf("%d",a[i])}
    printf("end");
    return 0; }
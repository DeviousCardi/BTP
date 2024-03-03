#include <stdio.h>
int main(){
int a[100];
int b[100];
int c[100];
int n;
int i=0;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);}
for(i=0;i<n;i++){scanf("%d",&b[i]);}
for(i=0;i<n;i++){c[b[i]]=a[i];}
for(i=0;i<n;i++){printf("%d ",c[i]);}
printf("end");
    return 0; }
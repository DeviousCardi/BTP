#include <stdio.h>
int main(){
int a[100];
int b[100];
int c[100];
int n;
int i=0,j=0;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);}
for(j=0;j<n;j++){scanf("%d",&b[j]);}
for(i=0;i<n;i++){c[b[i]]=a[i];}
    return 0; }
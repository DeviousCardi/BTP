#include <stdio.h>
int main(){
int i,j,n;
int value,num;
int a[100];
int b[10];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&value);
    a[i]=value; }
  for(j=0;j<n;j++) {
      scanf("%d",&num);
      b[j]=num; }
    for(j=0;j<n;j++){
        a[i]=b[j];
                  printf("%d",a[i]);}
    return 0; }
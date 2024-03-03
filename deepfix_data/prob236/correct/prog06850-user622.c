#include <stdio.h>
int main(){
int i,n;
int j=0;
int value,num;
int a[100];
int b[10];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&value);
    a[i]=value; }
  while(j<n) {
      scanf("%d",&num);
      b[j]=num;
        i=b[j];
                  printf("%d",a[i]);}
    return 0; }
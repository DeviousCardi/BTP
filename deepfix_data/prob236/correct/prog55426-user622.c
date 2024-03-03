#include <stdio.h>
int main(){
int i,j,n;
int value,num;
int a[100];
int b[10];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&value);
    a[i]=value; }
for(j=0;j<n;j++) {
   scanf("%d",&b[j]);
    b[j]=num;
    if(b[j]==i){
        printf("%d",a[i]);} }
    printf("end");
    return 0; }
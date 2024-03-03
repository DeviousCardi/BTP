#include <stdio.h>
int main(){
 int t[10000];
 int i,sum;
 char a[10000];
 for(i=0;i<4;i++)
 a[i]=getchar();
 sum=a[0]+a[1]+a[2]+a[3];
 for(i=0;i<10000;i++){
    t[i]=2016+i;
     if(t[i]%sum==0){
     printf("%d",t[i]);
     return 0; } }
    return 0; }
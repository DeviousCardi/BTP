#include <stdio.h>
int main(){
int n,h;
h=0;
int i=0;
int height[i];
int count=0;
scanf("%d",&n);
while(i<n) {
     scanf("%d",&h);
     height[i]=h;
     i++; }
while(i<n) {
     if(height[i+1]>height[i]&&height[i+1]>height[i+2])
     count=count+1;
     i++; }
printf("%d",count);
     return 0; }
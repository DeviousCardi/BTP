#include <stdio.h>
int main(){
int n,h;
h=0;
int i=0;
int count=0;
scanf("%d",&n);
while(i<n) {
     int height[i];
     scanf("%d",&h);
     height[i]=h;
      i++;
     if(height[i+1]>height[i]&&height[i+1]>height[i+2])
     count=count+1;
     printf("%d",count); }
     return 0; }
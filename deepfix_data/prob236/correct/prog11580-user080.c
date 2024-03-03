#include <stdio.h>
int main(){
    int n,i,count,ch;
    int s[100];
    ch=getchar();
    scanf("%d",&n);
    for(i=1;i<100;i=i+1) {
       scanf("%d",s[i]); }
    count=i-1;
    while(count>=0) {
      printf("%d",s[i]);
      count=count-1; }
    printf("end");
    return 0; }
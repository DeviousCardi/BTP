#include <stdio.h>
int main(){
    int n,i,count,ch;
    int s[100];
    ch=getchar();
    scanf("%d",&n);
    for(i=1;i<100;i=i+1) {
        s[i]=ch;
        ch=getchar(); }
    count=i-1;
    while(count>=0) {
      putchar(s[i]);
      count=count-1; }
    printf("end");
    return 0; }
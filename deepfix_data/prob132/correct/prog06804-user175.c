#include<stdio.h>
#include<string.h>
int main() {
  int n,a[100],i=0,j=0,ch;
    scanf("%d\n",&n);
    while(i<2*n-1) {
        ch=getchar();
        if(ch!=',') {
            a[j]=ch-'0';
            j++; }
        i++; }
    printf("%d",a[4]);
    return 0; }
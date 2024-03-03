#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    char s[4];
    char ch=getchar();
    int sum=0;
    for(int i=0;i<=3;i++){
        sum=sum+ch;
        putchar(s[i]);
        ch=getchar(); }
    printf("%d",sum-'0');
    return 0; }
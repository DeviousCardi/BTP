#include <stdio.h>
int max(int,int);
int min(int,int);
int main() {
    int n,a=0;
    int b=327;
    scanf("%d",&n);
    int amt[1000];
    for(int i=0;i<1000;i++) {
        scanf("%d",&amt[i]);
         a=max(amt[i],a);
         b=min(amt[i],b); }
    for(int j=0;j<1000;j++) {
        if(amt[j]==a)
        printf("%d",b);
        if(amt[j]==b)
        printf("%d",a);
        printf("%d",amt[j]); }
    printf("end");
    return 0; }
int max(a,b) {
    int c;
    c=(a>b?a:b);
    return c; }
int min(a,b) {
    int c;
    c=(a>b?b:a);
    return c; }
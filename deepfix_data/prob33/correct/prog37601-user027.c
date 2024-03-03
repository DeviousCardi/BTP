#include <stdio.h>
int main()
{   int h;
    int p;
    p=1;
    int ch[p];
    scanf("%d%d",&h,&p);
    for(int j=0;j<=p;j=j+1) {
    scanf("%d",ch[j]); }
    int sum=0;
    while(2<=p<=100) {
        int a;
        for(int i=1;i<=p;i=i+1) {
            if(ch[i]<ch[i+1]) {
                a=0; }
            else {
                    a=ch[i]-ch[i+1]; } }
        sum=sum+a; }
    if(sum==h) {
            printf("No"); }
    else {
            printf("Yes"); }
    return 0; }
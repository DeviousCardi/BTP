#include <stdio.h>
int main()
{   int h;
    int p;
    int ch[];
    scanf("%d%d",&h,&p);
    scanf("%s",*ch[]);
    while(2<=p<=100) {
        int sum=0;
        for(int i=1;i<=p;i=i+1) {
            int a;
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
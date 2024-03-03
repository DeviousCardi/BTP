#include<stdio.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
    if(h%2!=0)
        printf("*\n");
    for(i=2;i<=h;i=i+1) {
        for(j=2;j<=i;j=j+1) {
            if(j==(i-1))
               printf(" ");
            else
               printf("*"); }
        printf("\n"); }
    return 0; }
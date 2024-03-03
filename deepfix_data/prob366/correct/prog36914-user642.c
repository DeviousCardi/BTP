#include<stdio.h>
int main() {
    int n,i,j,b,min;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=1;i+j<2*n;j++)
            if (a[i]==a[i+j]) {
                b=j;
                if(i==0) min=j;
                break; }
        if(min>b)
            min=b; }
    printf("%d",min); }
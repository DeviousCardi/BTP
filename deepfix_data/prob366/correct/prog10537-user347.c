#include <stdio.h>
int main() {
    int n,min=200,d;
    scanf("%d",&n);
    int a[2*n];
    for(int i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<2*n;i++) {
        for(int j=0;j<2*n;j++) {
            if((a[i]==a[j])&&(i!=j)) {
                if(j>i)
                d=j-i;
                else d=i-j;
                if(min>d)
                min=d; } } }
    printf("%d",min);
    return 0; }
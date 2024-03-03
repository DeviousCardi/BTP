#include <stdio.h>
int main() {
    int n,l,flag=0;
    scanf("%d%d",&n,&l);
    int a[l];
    for(int i=0;i<l;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<l;i++) {
        for(int j=i+1;j<l;j++) {
            if(a[i]+a[j]==n) {
                flag=1;
                break; } } }
    if(flag==1)
        printf("lucky");
    else
        printf("unlucky"); }
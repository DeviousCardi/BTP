#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,max,j,x;
    int a[1000];
    max=-1111111;
    scanf("%d",&n);
    scanf("%d",&m);
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&x); } }
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if (x>max){
                max=x; } } }
    printf("%d",max);
    return 0; }
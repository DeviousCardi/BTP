#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char a[2*n-1];
    int c=(2*n-1);
    scanf("%s",a);
    int i,j;
    int count=0;
    for(i=0;i<c;i=i+2){
        count=0;
        for(j=0;j<c;j=j+2){
            if(a[j]==a[i]){
                count=count+1; } }
        if(count!=a[i]){
            printf("No"); return 0; } }
    printf("Yes");
    return 0; }
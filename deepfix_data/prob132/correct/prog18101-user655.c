#include <stdio.h>
int main() {
   int n;
    scanf("%d",&n);
    int a[n];
    int p;
    for(p=0;p<(n-1);p++){
    scanf("%d,",&a[p]); }
    scanf("%d",&a[n]);
    int r;
    for(r=0;r<n;r++){
        printf("%d",a[r]); }
    int i,j;
    int count;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[j]==a[i]){
                count=count+1; } }
        if(count!=(a[i])){
            printf("No"); return 0; } }
    printf("Yes");
    return 0; }
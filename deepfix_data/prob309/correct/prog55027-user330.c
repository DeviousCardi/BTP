#include <stdio.h>
int main() {
    int n,i,j;
    char h;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%c",&h);
        b[i]=0; }
    for(i=0;i<n;i++){
        for(j=0;j<=n-1;j++){
            if(a[i]==a[j])b[i]++; }
        if(b[i]!=a[i]){
            printf("No");
            return 0; } }
    printf("Yes");
    return 0; }
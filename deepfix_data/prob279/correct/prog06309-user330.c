#include <stdio.h>
int main() {
    int n,i,j,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if(a[i]==a[j]){
            printf("%d",a[i]);break; } }
        if(a[i]==a[j])break; }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            c=0;
            if(a[j]==i){
                c++;
                break; } }
        if(c==0){
            printf("%d",a[i]);
            break; } }
    return 0; }
#include <stdio.h>
int main() {
    int n, c=0, d, e;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i]){
                c=c+1;
                break; } }
        if(c!=0){
            d=a[i];
            break; } }
    for(int i=0;i<n;i++){
        int b=0;
        for(int j=0;j<n;j++){
            if(a[j]==i){
                b=b+1;
                break; } }
        if(b==0){
            e=i;
            break; } }
    printf("%d\n%d", d,e);
    return 0; }
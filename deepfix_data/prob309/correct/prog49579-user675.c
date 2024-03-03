#include <stdio.h>
int main() {
    int n, d=0;
    scanf("%d\n", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d,", &a[i]); }
    for(int i=0;i<n;i++){
        int b=0, c=1;
        for(int j=0;j<i;j++){
            if(a[j]==a[i]){
                b=b+1;
                break; } }
        if(b!=0)
            break;
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i])
                c=c+1; }
        if(c!=a[i])
            d=d+1; }
    if(d==0)
        printf("Yes");
    else
        printf("No");
    return 0; }
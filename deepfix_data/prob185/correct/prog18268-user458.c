#include <stdio.h>
int main() {
    int n,m;
    scanf("%d%d\n",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+a[j]==m){
                printf("YES");
                return 0; } } }
    printf("NO");
    return 0; }
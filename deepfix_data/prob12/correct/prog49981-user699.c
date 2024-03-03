#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[2*n],a[2*n],k;
    for (int i=0;i<=2*n-1;i++){
        scanf("%d",&s[i]); }
    for (int i=0;i<=(2*n)-1;i++){
        for (int j=0;j=(i+1);j++){
            if (s[i]==s[j]){
                for (k=0;k<=2*n-1;k++){
                    a[k]=j-i; } } } }
    int x,m=1000;
    for (k=0;k<=2*n-1;k++) {
        x=a[k];
        if (a[k]<=m){
            m=a[k]; } }
    printf("%d",a[k]);
    return 0; }
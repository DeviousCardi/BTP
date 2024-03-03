#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[2*n],a[2*n],k;
    for (int i=0;i<=(2*n)-1;i++){
        scanf("%d",&s[i]); }
    k=0;
    for (int i=0;i<=(2*n)-1;i++){
        for (int j=i+1;j<=2*n-1;j++){
            if (s[i]==s[j]){
                    a[k]=j-i;
                    k++;
                    break; } } }
    int m=1000;
    for (k=0;k<n;k++) {
        if (a[k]<=m){
            m=a[k]; } }
    printf("%d",m);
    return 0; }
#include<stdio.h>
#include<limits.h>
int main() {
    int n, m;
    int i, j, k, least;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(j=0; j<m; j++){
        for(i=0; i<n; i++){
            scanf("%d", &a[i]); }
        b[j]=a[0];
        for(k=0; k<n; k++){
            if(b[j]<a[k]){
                b[j]=a[k]; } } }
    least=b[0];
    for(i=0; i<m; i++){
        if(least>b[i]){
            least=b[i]; } }
    printf("%d", least);
    return 0; }
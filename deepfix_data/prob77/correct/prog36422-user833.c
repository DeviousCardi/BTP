#include <stdio.h>
int main() {
    int n;
    int a[1000];
    int i, j, k;
    int rich, poor;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); }
    rich=a[0];
    for (i=1; i<n; i++){
        if (rich<a[i]){
            rich = a[i];
            j=i; }
        else j=0; }
    poor=a[0];
    for (i=1; i<n; i++){
        if (poor>a[i]){
            poor=a[i];
            k=i; } }
    a[k]=rich;
    a[j]=poor;
    for (i=0; i<n; i++){
        printf("%d ", a[i]); }
    printf("end");
    return 0; }
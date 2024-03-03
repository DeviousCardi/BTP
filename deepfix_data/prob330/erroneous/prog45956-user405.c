#include <stdio.h>
int main(){
    int n, hieght[100], count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &hieght[i]); }
    for(int i=1; i<(n-1); i++) {
        if(hieght[i-1]<hieght[i] && hieght[i+1]<hieght[i]) {
            count++;
            i++ } }
    printf("%d", count);
    return 0; }
#include <stdio.h>
void sel_sort(int a[], int start, int end){
    if(start==end) return;
    int max=0, g=0;
    for(int i=start; i<end; i++){
        if(a[i]>max){
            max=a[i];
            g=i; } }
    int tmp=a[g];
    a[g]=a[start];
    a[start]=tmp;
    sel_sort(a, start+1, end); }
int main() {
    int n, k, i;
    scanf("%d %d\n", &n, &k);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); }
    sel_sort(a, 0, n);
    printf("%d", a[k-1]);
    return 0; }
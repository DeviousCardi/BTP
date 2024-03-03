#include <stdio.h>
int main() {
    int n, min;
    scanf("%d", &n);
    int arr[2*n];
    int occur[2];
    min = 2*n;
    for(int i=0; i<2*n; i++) {
        scanf("%d", &arr[i]); }
    for(int i=1; i<=n; i++) {
        int k=0;
        for(int j=0; j<2*n; j++) {
            if(arr[j] == i)
                occur[k++] = j;
            if(k==2) (min>(occur[1]-occur[0])) {
                if(min>(occur[1]-occur[0]))
                    min=occur[1]-occur[0];
                break; } } }
    printf("%d",min);
    return 0; }
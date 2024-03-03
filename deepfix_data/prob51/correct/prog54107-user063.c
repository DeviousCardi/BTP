#include <stdio.h>
int main() {
    int N, k;
    scanf("%d %d\n", &N, &k);
    int arr[N];
    for(int i=0; i<N; i++)
        scanf("%d", &arr[i]);
    int max, temp;
    for(int i=0; i<N; i++) {
        max=i;
        for(int j=i+1; j<N; j++) {
            if(arr[j]>arr[max])
                max=j; }
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp; }
    printf("%d", arr[k-1]);
    return 0; }
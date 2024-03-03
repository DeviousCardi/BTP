#include <stdio.h>
int main() {
    int n,i=0;
    scanf("%d",&n);
    int count;
    int arr[2*n];
    int c=getchar();
    while (c!=EOF) {
        arr[i]=c;
        c=getchar();
        i++; }
    for(int i=0;i<2*n;i++) {
        if(arr[i]==',')
        continue;
        count=0;
        for(int j=0;j<2*n;j++) {
            if(arr[j]==arr[i]) {
                count=count+1; } }
        if(count!=arr[i]) {
                printf("No"); } }
    printf("Yes");
    return 0; }
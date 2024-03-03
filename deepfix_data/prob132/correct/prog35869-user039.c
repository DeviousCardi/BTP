#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count;
    char arr[2*n];
    gets(arr);
    for(int i=0;i<2*n;i++) {
        if(arr[i]==',') {
        continue; }
        count=0;
        for(int j=0;j<2*n;j++) {
            if(arr[j]==arr[i]) {
                count=count+1; } }
        if(count!=arr[i]) {
                printf("No"); } }
    printf("Yes");
    return 0; }
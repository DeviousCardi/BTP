#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count;
    char arr[2*n];
    scanf("%s",arr);
    for(int i=0;i<2*n-1;i++) {
        if(arr[i]==',') {
        continue; }
        count=0;
        for(int j=0;j<2*n;j++) {
            if(arr[j]==arr[i]) {
                count=count+1; } }
        if(('0'+ count)!=arr[i]) {
                printf("No");
                return 0; } }
    printf("Yes");
    return 0; }
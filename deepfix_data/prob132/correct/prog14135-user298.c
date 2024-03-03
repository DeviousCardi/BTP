#include <stdio.h>
int main() {
    int n,z;
    int i,j,c=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d,",&arr[i]); }
    for (i=0;i<n;i++) {
        count=0;
        c=arr[i];
        for(j=0;j<n;j++) {
            if (c==arr[j]) {
                count+=1; } }
        if(count==c) {
            z=1;
            continue ; }
        else {
            z=0;
            printf("No");
            break; } }
    if(z==1) {
        printf("Yes"); }
    return 0; }
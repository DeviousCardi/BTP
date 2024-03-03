#include<stdio.h>
int main() {
    int n,i,j,ele;
    int max=0;
    int count=1;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    for(i=0;i<n;i++) {
        ele=ar[i];
        for(j=i;j<n;j++) {
            if(ar[j]>ele) {
                ele=ar[j];
                count++; } }
        if(max<count) {
            max=count; }
        count=1; }
    printf("%d",max);
    return 0; }
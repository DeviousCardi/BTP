#include <stdio.h>
int main() {
    int a[10000];
    int n,i,counter;
    scanf("%d\n",&n);
    for(int i=0;i<n-1;i++) {
        scanf("%d,",a+i); }
    scanf("%d",&a[n-1]);
    for(i=0;i<n;i++) {
        if(a[i]+1) {
            counter=1;
            for(int j=i+1;j<n;j++) {
                if(a[j]==a[i]) {
                    counter++;
                    a[j]=-1; } }
            if(a[i]!=counter) {
                break; } } }
    if(i!=n) {
        printf("\nNo"); }
    else {
        printf("\nYes"); }
    return 0; }
#include <stdio.h>
int main() {
    int b, n,i,j,k=0;
    scanf("%d\n",&n);
    char a[n];
    scanf("%c",a);
    for(i=0;i<n;i++){
       int count=0;
        a[i]=b;
        for(j=0;j<n;j++) {
            if(a[j]==b)
            count++;
        }if(count!=b) {
            k++;
            printf("No"); }
    }if(k==0)
    printf("Yes");
    return 0; }
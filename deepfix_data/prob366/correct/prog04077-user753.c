#include <stdio.h>
int main(){
    int j,n,i;
    scanf("%d",&n);
    int ar[2*n];
    for(i=0;i<=2*n-1;i++) {
        scanf("%d",&ar[i]); }
    int min=n;
    for(i=0;i<=2*n-1;i++) {
        for(j=i+1;j<=2*n-1;j++) {
            if(ar[i]==ar[j]) {
                if(min>j-i)
                min=j-i; } } }
    printf("%d",min);
    return 0; }
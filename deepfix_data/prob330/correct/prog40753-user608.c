#include <stdio.h>
int main(){
    int n,h[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",h[i]); }
    int count=0;
    for(int j=1;j<n-1;j++) {
        if(h[j]>h[j-1]&&h[j]>h[j+1])
        count+=1; }
    printf("%d",count);
    return 0; }
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&m[i]); }
    int count=0;
    for(int j=1;j<n-1;j++) {
        if(m[j]>m[j-1] && m[j]>m[j+1])
        count+=1; }
    printf("%d",count);
    return 0; }
#include <stdio.h>
int main(){
    int n;
    int m[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&m[i]); }
    if(n>2 && n<101){
    int count=0;
    for(int j=1;j<n-1;j++) {
        if(m[j]>m[j-1] && m[j]>m[j+1])
        count+=1; }
    printf("%d",count); }
    return 0; }
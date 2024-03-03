#include <stdio.h>
int main(){
    int k,n;
    int s[n];
    int ch;
    int i,j;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ch);
        s[i]=ch; }
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(s[i]+s[j]==k) {
                printf("lucky");
                return 0; } } }
    printf("unlucky");
    return 0; }
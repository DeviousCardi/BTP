#include <stdio.h>
int main(){
    int k,n;
    int s[n];
    int ch;
    int i,j;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    scanf("%d",&ch);
    for(i=0;i<n;i++){
        s[i]=ch;
        scanf("%d",&ch); }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[i]+s[j]==k) {
                printf("lucky");
                break; }
            if(s[i]+s[j]!=k) printf("unlucky");
            break; } }
    return 0; }
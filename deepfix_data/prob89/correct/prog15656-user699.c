#include <stdio.h>
int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int s[n],i=0;
    scanf("%d",&s[i]);
    if (n>=2){
        for (i=0;i<=100;i++){
            for (int j=0;j<=n;j++){
                if (s[i]+s[j]==k){
                    break; } } }
        printf("lucky"); }
    else {
        printf("unlucky"); }
    return 0; }
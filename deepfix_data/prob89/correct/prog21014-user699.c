#include <stdio.h>
int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int s[n],i=0,flag=0;
    scanf("%d",&s[i]);
    if (n>=2){
        for (i=0;i<=n-1;i++){
            for (int j=i+1;j<=n-1;j++){
                if (s[i]+s[j]==k){
                    flag=1;
                    break; } }
            if (flag==1){
                break; } }
        if (flag==1){
            printf("lucky"); }
        else if (flag==0){
         printf("unlucky"); } }
    else {
        printf("unlucky"); }
    return 0; }
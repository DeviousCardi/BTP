#include <stdio.h>
int main(){
    int n,i,j, str[n];
    scanf("%d\n",&n);
    for(i=0;i<=99;i++){
        scanf("%d",&str[i]); }
    for(j=0;j<=99;j++){
        for(i=0;i<=99;i++){
            if(j=str[i]){
                printf("%d",&j);} }
    printf("end");
    return 0;
} }
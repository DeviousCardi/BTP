#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
                    int count=0;
                    int j;
    for(j=1;j<(n-1);j++){
        if((num[j]>num[j-1])&&(num[j]>num[j+1])){
            count=count+1;} }
        printf("%d",count);
    return 0; }
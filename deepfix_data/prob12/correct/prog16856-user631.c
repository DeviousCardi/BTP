#include <stdio.h>
int main(){
    int n,a[400];
    int count[400],countmin;
    scanf("%d",&n);
    for(int i=0;i<(2*n);i++){
        scanf("%d",&a[i]);
        count[i]=1; }
    for(int i=0;i<(2*n);i++){
        for(int j=i+1;j<((2*n)-1);j++){
            if(a[i]==a[j]){
                count[j]=400;
                break; }
            else
                count[i]++; } }
    countmin=count[0];
    for(int i=0;i<((2*n)-1);i++){
        for(int j=0;j<(2*n-1);j++){
            if(count[i]>count[j])
                countmin=count[j]; } }
    printf("%d",countmin);
    return 0; }
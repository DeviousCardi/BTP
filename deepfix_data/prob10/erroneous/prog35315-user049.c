#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for (int i=0;i<n;i++){
        scanf("%d",&s[i]); }
    int j;
    int sum =0;
    for (int l=1;l<n;l++){
        for(j=0;j<l;j++){
            if(s[j]<s[l])){
                sum =sum +1;
            }else{
                break; } } }
    printf("%d",sum);
    return 0; }
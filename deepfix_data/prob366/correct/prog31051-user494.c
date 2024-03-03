#include <stdio.h>
int main() {
    int min=1000,n,d;
    int flag=0;
    scanf("%d",&n);
    int gates[2*n];
    for(int i=0;i<2*n;i++) {
        scanf("%d",&gates[i]); }
    for(int i=0;i<2*n-1;i++) {
        for(int j=i+1;j<2*n;j++) {
            if(gates[i]==gates[j]) {
                d=j-i; }
            if(d<min) {
                min=d; }
            flag=1; } }
    if(flag==0){
        printf("%d",min); }
    else{
        printf("%d",0); }
    return 0; }
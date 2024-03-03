#include <stdio.h>
int main(){
    int n,difference,flag=0;
    max=100;
    scanf("%d/n",&n);
    int list[2*n];
    int i=0;
    while(i<2*n) {
        scanf("%d",&list[i]);
        i++; }
    for(int j=0;j<2*n-1;j++) {
        for(int k=i+1;k<2*n;k++) {
            if(list[i]==list[j]) {
                flag=1;
                difference=j-i; } }
        if(difference<max)
        max=temp; }
    if(flag==1) {
        printf("%d",min); }
    return 0; }
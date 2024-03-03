#include <stdio.h>
int main() {
    int a[1000];
    int i;
    for(i=0;i<1000;i++){
        a[i]=0; }
    int total;
    scanf("%d",&total);
    int c;
    for(i=0;i<total;i++){
        scanf("%d,",&c);
        a[c]++; }
    for(i=0;i<1000;i++){
        if(a[i]){
            if(a[i]==i){ ; }
            else{
                printf("No");
                return 0; } } }
    printf("Yes");
    return 0; }
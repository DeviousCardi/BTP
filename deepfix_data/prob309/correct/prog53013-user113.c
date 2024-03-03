#include <stdio.h>
int main() {
    int a[100];
    int i;
    for(i=0;i<100;i++){
        a[i]=0; }
    int total;
    scanf("%d",&total);
    int c;
    for(i=0;i<total;i++){
        scanf("%d,",&c);
        printf("%d\n",c);
        a[c]++; }
    printf("%d",a[1]);
    for(i=1;i<100;i++){
        if(a[i]){
            if(a[i]==i){
                printf("%d",a[i]); }
            else{
                printf("No");
                return 0; } } }
    printf("Yes");
    return 0; }
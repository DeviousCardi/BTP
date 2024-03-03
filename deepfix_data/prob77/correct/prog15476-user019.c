#include <stdio.h>
int main() {
    int money[1001];
    int i,n,k,t,min,max,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&money[i]); }
    max=money[1];
    min=money[1];
    for(i=1;i<=n;i++) {
        if(money[i]>max) {
            max=money[i];
            k=i; }
        else if(money[i]<min) {
            min=money[i];
            t=i; } }
    temp=money[k];
    money[k]=money[i];
    money[i]=temp;
    for(i=1;i<=n;i++) {
        printf("%d",money[i]); }
    printf("end");
    return 0; }
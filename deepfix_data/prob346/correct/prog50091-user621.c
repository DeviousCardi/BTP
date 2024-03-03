#include <stdio.h>
int main(){
    int n,cost,ch;
    scanf("%d",&n);
    int random[n];
    int ordered[n];
    scanf("%d",&ch);
    for(int i=0;i<n;i++) {
        random[i]=ch;
        scanf("%d",&ch); }
    int i2=0;
    for(cost=0;cost<=99;cost++) {
        for(int i=0;i<n;i++) {
            if(cost==random[i]) {
                ordered[i2]=random[i];
                i2++; }
            else ; } }
    for(int i=0;i<n;i++) {
        printf("%d ",ordered[i]); }
    printf("end");
    return 0; }
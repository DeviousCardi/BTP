#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int money[num]
    for(int i=0;i<num;++i) {
        scanf("%d",&money[i]); }
    int max=money[0],min=money[0],maxp=0,minp=0;
    for(int i=1;i<num;++i) {
        if(max<money[i]) {
            max=money[i];
            maxp=i; }
        if(min>money[i]) {
            min=money[i];
            minp=i; } }
    money[maxp]=min;
    money[minp]=max;
    for(int i=0;i<num;++i) {
        printf("%d ",money[i]); }
    printf("end");
    return 0; }
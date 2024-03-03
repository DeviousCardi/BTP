#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int money[n];
    int a,i=0,l=0;
    while (i<n) {
        scanf("%d",&money[i]);
        i++; }
    i=1;
    int max=money[0], min=money[0];
    while (i<n) {
        if ((max)<(money[i]))
           max = money[i];
        i++; }
    l=1;
    while (l<n) {
        if (min>money[l]){
            min = money[l]; }
        l++; }
    a=0;
    while (a<n) {
        if (min==money[a])
        money[a]= max;}
     {   if (max==money[a])
        money[a]=min; }
    i=0;
    while (i<n)
    { printf("%d ",money[i]);
        i++; }
    printf("%d %d ",max, min);
    printf("end");
    return 0; }
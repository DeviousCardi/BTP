#include <stdio.h>
int main() {
    int n,i,nummax=0,count=1;
    scanf("%d",&n);
    int numbers[n];
    i=0;
    for(i;i<=n-1;i++) {
        scanf("%d,",&numbers[i]); }
    i=0;
    for(i;i<=n-1;i++) {
        if(numbers[i]>nummax) {
            nummax=numbers[i]; } }
    int numocc[nummax+1];
    i=0;
    for(i;i<=nummax;i++) {
        numocc[i]=0; }
    i=0;
    for(i;i<=n-1;i++) {
        numocc[numbers[i]]++; }
    i=0;
    for(i;i<=n-1;i++) {
      if(numbers[i]!=numocc[numbers[i]]) {
          count=0;
          break; } }
    if(count==1) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }
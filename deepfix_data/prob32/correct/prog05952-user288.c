#include <stdio.h>
#include <stdlib.h>
int main() {
int i, n, sum=0, t;
    scanf("%d\n",&n);
    int num[n];
    for(i=0;i<=n-1;i++){
    scanf("%d\n",&num[i] ); }
    if(num[0]<num[1])
        sum++;
    if(num[i-1]<num[i-2])
        sum++;
    for (t=1; t<=n-2; t++) {
        if((num[t]<num[t-1])&&(num[t]<num[t+1])) {
            sum++; } }
    if (sum>0) {printf("Yes");}
    else {printf("No");}
    return 0; }
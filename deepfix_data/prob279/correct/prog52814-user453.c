#include <stdio.h>
int main() {
    int n;
    scanf("%d \n",&n);
    int count[n];
    int i;
    for(i=0;i<n;i++)
        count[i]=0;
    int array[n];
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]);
        char c;
        scanf("%c",&c);
        count[(array[i])]=count[(array[i])]+1; }
     for(i=0;i<n;i++) {
        printf("%d",count[i]); }
    return 0; }
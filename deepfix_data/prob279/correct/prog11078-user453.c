#include <stdio.h>
int main() {
    int n;
    scanf("%d \n",&n);
    int count[n];
    int i;
    for(i=1;i<=n;i++)
        count[i]=0;
    int array[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&array[i]);
        char c;
        scanf("%c",&c);
        count[(array[i])]=count[(array[i])]+1; }
    for(i=1;i<=n;i++) {
        if(count[i]==2)
        printf("%d",i); }
    for(i=1;i<=n;i++) {
        if(count[i]==0)
        printf("\n%d",i); }
    return 0; }
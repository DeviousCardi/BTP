#include <stdio.h>
int main() {
    int n,people[1000];
    int poor=0,wealthy=0;
    int temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&people[i]);
        if(people[i]>people[wealthy])
        wealthy=i;
        if(people[i]<people[poor])
        poor=i; }
    temp=people[wealthy];
    people[wealthy]=people[poor];
    people[poor]=temp;
    for(int i=0;i<n;i++)
    printf("%d ",people[i]);
    printf("end");
    return 0; }
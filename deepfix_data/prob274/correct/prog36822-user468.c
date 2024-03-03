#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int room[n];
    for (int i=1;i<n;i++)
    scanf("%d",&room[i]);
    room[0]=1;
    for (int i=1;i<n;i++) {
        if (room[i]==room[0]) {
            printf("%d ",i);
            count++;
            break; } }
    if (count==0)
    printf("%d",n);
    int counter=0;
    for(int i=1;i<n;i++) {
        counter=0;
        for(int j=1;j<n;j++) {
            if (room[i]==room[j])
            counter++;
        }printf("%d",counter); }
    return 0; }
#include<stdio.h>
#include<strings.h>
void reverseprint(num[],int index) {
    if(index<0)
    return;
    printf("%d ",num[index]);
    return reverseprint(num,index-1); }
int main() {
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&num[i]); }
    reverseprint(num)
return 0; }
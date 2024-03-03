#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[100];
    for(int a=0;a<n;a++)
    scanf("%d ",&arr[a]);
    int str[10005];
    str[0]=1;
    str[1]=arr[0];
    for(int a=2;a<100;a++)
    str[a]=arr[str[a-1]-1];
    int t=0,flag=1,k=0
    for(int a=1;a<100;a++) {
        for(int b=0;b<a;b++) {
            if(str[a]==str[b])
            {   flag=0;
                t=a;
                k=a-b;
                break; } }
        if(flag==0)
        break; }
    printf("%d %d",t,k);
        return 0; }
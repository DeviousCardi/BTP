#include <stdio.h>
int main() {
    int n,i,flag=1,count[1000];
    char arr[1000];
    scanf("%d", &n);
    scanf("%d", arr);
    for(i=0; i<1000; i++)
        count[i]=0;
    for(i=0; arr[i]!='\0'; i++) {
            if(arr[i]!=',') {
                    count[(arr[i]-'0')]++;
                    printf("%d\n",arr[i]-'0'); } }
    for(i=0; i<20; i++)
        printf("%d=%d ",i,count[i]);
    for(i=0; i<1000; i++) {
            if(count[i]!=0) {
                    if(count[i]!=i)
                        flag=0; } }
    if(flag==1)
        printf("Yes");
    else
        printf("No");
    return 0; }
#include <stdio.h>
int main() {
    int i,j,n,count,flag=0;
    char ch[100];
    scanf("%d",&n);
    for(i=0;i<(2*n-1);i++)
    scanf("%c",&ch[i]);
    for(i=0;i<(2*n-1);i=i+2) {
        count=0;
        for(j=0;j<(2*n-1);j=j+2) {
            if(ch[i]==ch[j])
            count++; }
        if(count!=(ch[i]-'0'-1)) {
            flag=1;
            break; } }
    if(flag==1)
    printf("Yes");
    else
    printf("No");
    return 0; }
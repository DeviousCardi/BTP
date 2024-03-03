#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char str[2*n];
    scanf("%s",str);
    int a[n];
    int j=0;
    for(int i=0;i<2*n-1;i++){
        int k=str[i];
        if(str[i]!=','){
            if(str[i]>'9')
                int k=str[i]/10;
            a[j]=k-'0';
            j++; } }
    printf("%d %d",a[0],a[9]);
    int flag=1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]==a[i])
                count++; }
        if(count!=a[i])
            flag=0; }
    if(flag==0)
        printf("No");
    else
        printf("Yes");
    return 0; }
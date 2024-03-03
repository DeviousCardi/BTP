#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char str[2*n-1];
    scanf("%s",str);
    int a[n];
    int j=0;
    for(int i=0;i<2*n-1;i++){
        if(str[i]!=','){
            a[j]=str[i]-'0';
            j++; } }
    int flag=1;
    for(int i=0;i<n;i++){
        int k=a[i],count=0;
        for(int j=0;j<n;j++){
            if(j!=i){
                if(a[j]==a[i])
                    count++; } }
        if((count)!=k)
            flag=0; }
    if(flag==0)
        printf("No");
    else
        printf("Yes");
    return 0; }
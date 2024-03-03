#include <stdio.h>
int main() {
    int i,n,flag=0,j,count;
    char x[100];
    scanf("%d",&n);
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++)
    if(x[i]!=',') {
            j=0;
            count=0;
            while(x[j]!='\0') {
                    if(x[i]==x[j++])
                        count++; }
            printf("%d\n",count);
            printf("%d\n",x[i]-'0');
            if(count!=x[i]-'0') {
                flag=1;
                break; } }
    if(flag==1)
        printf("No");
    else
        printf("Yes");
    return 0; }
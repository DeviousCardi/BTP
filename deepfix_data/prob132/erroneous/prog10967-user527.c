#include <stdio.h>
int main() {
    int i,n,no,no2,flag=0,j,count;
    char x[100];
    scanf("%d",&n);
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++)
    if(x[i]!=',') {
            no=0;
            while(x[i]!=',')&&(x[i]!='\0') {
                no=no*10+(x[i]-'0');
                i++; }
            j=0;
            count=0;
            while(x[j]!='\0') {
                    while(x[j]!=',')&&(x[j]!='\0') {
                        no2=no2*10+(x[j]-'0');
                        j++; }
                      if(no2==no)
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
#include <stdio.h>
#include<string.h>
int main() {
    char ch[100];
    scanf("%s,ch");
    int l=strlen(ch);
    int temp[26]={0};
    for(int i=0;i<l;i++) {
        temp[ch[i]-'a']=1; }
     for(int i=0;i<26;i++)
     printf("%d",temp[i]);
    return 0; }
#include<stdio.h>
#include<strings.h>
void reverse(int str[],int size,int ind);
int main() {
    int num;
    scanf("%d\n",&num);
    int arr[num];
    reverse(arr,num,0);
    return 0; }
void reverse(int str[],int size,int ind) {
    if(ind<size) {
    scanf("%d ",&str[ind]);
    ind++;
    reverse(str,size,ind);
    printf("%d " ,str[0]); } }
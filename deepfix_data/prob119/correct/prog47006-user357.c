#include <stdio.h>
#include <stdlib.h>
void towers(int , char,char,char);
long int hanoi(int n);
int main() {
    int num,i;
    scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    printf("%ld\n",hanoi(a[i])); }
    return 0; }
long int hanoi(int n){
    if(n==1)return 1;
    else if(n==-0)return 0;
    else return(2*hanoi(n-1)+1); }
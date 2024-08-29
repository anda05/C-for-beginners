#include<stdio.h>

int fact(int n){
    if(n==0)
    return 1;
    return n*fact(n-1);}

void nCr(int n, int r){
    if(n>=r && n>=0)
    printf("%d\n",fact(n)/(fact(n-r)*fact(r)));
    else
    printf("invalid\n");
   }    

void main()
{
    int n,r;
    printf("enter n & r: ");
    scanf("%d %d", &n, &r);
    nCr(n,r);
}
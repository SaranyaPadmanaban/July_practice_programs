#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);
    if(n%i==0){
        printf("not prime");
        i++;
    }
        else
        printf("prime");
        return 0;
    
}

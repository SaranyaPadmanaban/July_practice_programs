#include <stdio.h>

int main(void) {
int a,b,num;
scanf("%d%d",&a,&b);
for(num=a;(num>=a)&&(num<=b);num++)
{
if(num%2==0)
{
    printf("%d\t",num);
}
}
	return 0;
}


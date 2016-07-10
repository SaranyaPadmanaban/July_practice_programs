#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if((ch>='a'&&ch>='A')||(ch<='z'&&ch<='Z'))
printf("alphabet");
else
printf("not an alphabet");
return 0;
}   

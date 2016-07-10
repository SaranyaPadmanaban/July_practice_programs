#include <stdio.h>
int main(void) {
int n,n1,r,s=1;
n1=n;
while(n>0)
{
r=n%10;		
s=s*10;			
n=n/10;		
}
printf("%d\n",n1);
printf("%d\n",s);
if(n1==s)
printf("palindrome");
else
printf("not");
	return 0;
}

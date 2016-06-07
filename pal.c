#include<stdio.h>
int main()
{
int n,i,count=0;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
count++;
break;
}
}
if(count==0&&n!=1)
printf("The no is palindrome");
else
printf("The no is not palindrome");
}

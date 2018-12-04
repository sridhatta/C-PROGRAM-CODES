#include<stdio.h>
#include<conio.h>
#include<string.h>
void arr(char *ar)
{
int c=0,i=0;
printf("%c",ar[1]);
while(ar[i]!='\0')
{
c=c+1;
i++;
}
printf("%d",c);
}
void main()
{
char a[]={'a','b','c'};
int b;
clrscr();
b=strlen(a);
arr(a);
getch();
}

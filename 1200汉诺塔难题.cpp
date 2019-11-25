#include<stdio.h>
void f(int n,char a,char b,char c);
int main()
{
 int n=0;
 char a='A',b='B',c='C'; 
 scanf("%d",&n);
 f(n,a,b,c);
 return 0;
 } 
void f(int n,char a,char b,char c)
{
 if(n==1)
 {
  printf("Move disk %d from %c to %c\n",n,a,c);
 } 
 else 
 {
  f(n-1,a,c,b);
   printf("Move disk %d from %c to %c\n",n,a,c);
   f(n-1,b,a,c);
 }
}


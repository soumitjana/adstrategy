#include<stdio.h>
int share(int n1);
int like(int s1,int l1);

void main()
{
	int n,s=0;
 scanf("%d",&n);
 s=s+share(n);
 printf("%d",s);



}
int share(int n1)
{
	int i,j=5,l;
 for(i=1;i<=n1;i++)
 {
   l=like(j,1);

 }
 return(l);
}

int like(int s1,int l1)
{
  s1=s1/2;
  l1=s1*3;
  return(l1);
}

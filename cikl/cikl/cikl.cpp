// cikl.cpp: главный файл проекта.
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std; 

int main()
{ int n,q=0,w=0;
  cin>>n;
  char*p=new char [n];
  for(int i=0;i<=n;i++)
 {    cin>>p[i];
	  if((p[i]==0)&&(p[i]==1)&&(p[i]==2)&&(p[i]==3)&&(p[i]==4)&&(p[i]==5)&&(p[i]==6)&&(p[i]==7)&&(p[i]==8)&&(p[i]==9));
{	 q++;
} char*e=new char [q];
     for(int i=0;i<=n;i++)
{     
	 if((p[i]==0)&&(p[i]==1)&&(p[i]==2)&&(p[i]==3)&&(p[i]==4)&&(p[i]==5)&&(p[i]==6)&&(p[i]==7)&&(p[i]==8)&&(p[i]==9));
	 e[i]=p[i];
} 
  }  for(int i=0;i<=n;i++)
{	  if ((p[i]!=0)&&(p[i]!=1)&&(p[i]!=2)&&(p[i]!=3)&&(p[i]!=4)&&(p[i]!=5)&&(p[i]!=6)&&(p[i]!=7)&&(p[i]!=8)&&(p[i]!=9));
	  w++;
	  char*r=new char [w];
	  for(int i=0;i<=n;i++)
{    
	 if((p[i]==0)&&(p[i]==1)&&(p[i]==2)&&(p[i]==3)&&(p[i]==4)&&(p[i]==5)&&(p[i]==6)&&(p[i]==7)&&(p[i]==8)&&(p[i]==9));
	 r[i]=p[i];
}
	  for(int i=0;i<=n;i++)
	  cin>>e[i]>>" ">>endl;
	  cin>>r[i]>>" ">>endl;
	 _getch;
	 return 0;
}
	
}
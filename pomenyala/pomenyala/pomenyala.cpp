// pomenyala.cpp: главный файл проекта.
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
 
int main()
{int n,f,g,l,h,k;
 cin>>n;
 g=n;
 h=n;
 k=0;
 while(g!=0)
{   g=g/10;
	k++;
}
{  f=n/pow(10.0,k-1);
   l=n%10;
   h=h-pow(10.0,k-1);
   h=h/10;
   h=h*10+f;
   h=h+l*pow(10.0,k-1);
   cout<<h<<endl;
}
_getch();
return 0;
}
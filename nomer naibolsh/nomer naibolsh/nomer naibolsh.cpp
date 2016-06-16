// nomer naibolsh.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std; 

int main()
{int n,max,k=1,g,i;
cin>>n;
g=n;
max=0;
 while(n!=0)
 {if(n>=max)
 {max=n;
 i=k;}
 k++;
 cin>>n;
}
cout<<i;
_getch();
return 0;
}

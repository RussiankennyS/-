// lab4.cpp: главный файл проекта.
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std; 

int main()
{int n;
float a,min=10000;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a;
if(a<min)
{min=a;
}
}
cout<<min;
	_getch();
return 0;
}
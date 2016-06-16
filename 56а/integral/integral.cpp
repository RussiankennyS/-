// integral.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std; 

int main()
{int n;
float x;
cout<<"vvedite n,x"<<endl;
cin>>n>>x;
int N=1;
float R=0;
for(int i=1;i<=n;i++)
{N*=i;
R+=(1/N)+sqrt(abs(x));
}
cout<<R;
_getch();
return 0;
}


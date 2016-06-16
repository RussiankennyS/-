
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
using namespace std;
const double E=0.0001;
int x,k;
float func(int,int,int);
int main() 
{float a,R;
cin>>a;
cin>>x;
cin>>k;
R=((func(a,3,k)-func(a*a+1,6,k))/(1+func(3+a,7,k)));
cout<<"Otvet: "<<R;
	_getch ();
	return 0;
}
/*int func(int a, int b,int k)
{float y,y0;
y=1.0;
do
{y0=y;
y=y+(x/pow(y,k-1)-y)/k;
}while (abs(y-y0)>E);
return y;
}*/
float func(int a, int b, int k)
{float y,y0;
y=1.0;
y0=y;
if(abs(y-y0)>E);
{y=y+(x/pow(y,k-1)-y)/k;
}
return y;
}

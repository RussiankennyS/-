// 6.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{srand(time(0));
int *A=new int[20];
int C=1;
/*ofstream outfile("TEST.txt");
if(!outfile)
	{cout<<"errror"<<endl;
return 1;
    }
for(int i=1; i<20; i++)
	outfile<<rand()%9;
outfile.close();*/
ifstream infile("TEST.txt");
if(!infile)
	{cout<<"errror"<<endl;
return 2;

    }
for(int i=1; i<19; i++)
{infile>>A[i];
}
for(int i=1; i<19; i++)
	{ if(A[i]<A[i+1])
    C*=1;
    else
	C*=0;
}
if (C=1)
{cout<<"vozrastaet";
}
else 
	{cout<<"ne vozrastaet";
}
infile.close();
_getch();
return 0;
}

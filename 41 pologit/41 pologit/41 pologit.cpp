// 41 pologit.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

using namespace std;
 
int main() {
	int n,z=0,p=0;
	cin>>n;
	char**matr=new char*[n];
	for(int i=0;i<n;i++)
	matr[i]=new char[n];
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	 {cout<<"Enter ["<<i<<"]["<<j<<"] element";
            cin>>matr[i][j];
	 }
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	{cout<<matr[i][j]<<" ";
	}
	cout<<endl;
	}
	}
	int*B=new int[n];
    for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	 {if(matr[i][j]=='*')
    z++;
	else if(matr[i][j]=='+')
    p++;
	if(z>=p)
	B[i]=1;
	else
		B[i]=0;}
z=0;
p=0;
	}
	for(int i=0;i<n;i++)
	cout<<B[i]<<" ";
    _getch ();
	return 0;
}

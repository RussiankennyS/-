// 23a 1pologit (vector).cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>

using namespace std;
 
int main()
{srand(time(0));
	int n,i;
	cin>>n;
	int**matr=new int*[n];
	for(int i=0;i<n;i++)
	matr[i]=new int[n];
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	 {matr[i][j]=10-(rand()%10+1);
	  cout<<matr[i][j]<<" ";
	 }
	 cout<<endl;
	}
	int*B=new int[n];
    for(int i=0;i<n;i++)
	{for(int j=0;j<n-1;j++)
	if(matr[i][j]<matr[i][j+1]&&B[i]!=0)
    B[i]=1;
	else
    B[i]=0;
	}
	for(int i=0;i<n;i++)
	cout<<B[i]<<" ";
    _getch ();
	return 0;
}

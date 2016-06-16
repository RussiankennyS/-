// 48.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>

using namespace std;
 
int main() {
	int n=7,m=4,gor=0,vert=0;
	float**matr=new float*[n];
	for(int i=0;i<m;i++)
	matr[i]=new float[m];
	for(int i=0;i<m;i++)
	{for(int j=0;j<n;j++)
	 {matr[i][j]=(rand()%10+1)/float(rand()%10+1);
	  cout<<matr[i][j]<<" ";
	 }
	 cout<<endl;
	}

	float max=0;
	for(int i=0;i<m;i++)
	{for(int j=0;j<n;j++)
	{if(matr[i][j]>max)
	{max=matr[i][j];
	gor=i;
	vert=j;
	}
	}
	}
	for(int i=0;i<n-1;i++)
	{
	swap(matr[i],matr[gor]);
	}
	for(int i=0;i<m;i++)
    {for(int j=i+1;j<m;j++)
	  {
	 swap(matr[vert][j],matr[i][j]);
	  }
	}
	for(int i=0;i<m;i++)
	{for(int j=0;j<n;j++)
		cout<<matr[i][j]<<" ";
	}	    cout<<endl;
		_getch ();
	return 0;
}

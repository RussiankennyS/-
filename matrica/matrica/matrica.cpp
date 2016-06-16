// matrica.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
using namespace std;
 
int main() {
	int n=10,m=20;
	int**A=new int*[n];
	for(int i=0;i<m;i++)
		A[i]=new int[m];
	int*a=new int[n];
	int*b=new int[m];
	    for (int i=0; i<n; i++)
        {
			cin>>a[i];
	    }
        for (int j=0; j<m; j++)
		{cin>>b[j];
		}
		for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
		{ 
            A[i][j]=a[i]/(1+abs(b[j]));
        }
    for (int i=0; i<n; i++)
	for (int j=0; j<m; j++)
        cout<<A[i][j]<<" ";
    _getch ();
	return 0;
}
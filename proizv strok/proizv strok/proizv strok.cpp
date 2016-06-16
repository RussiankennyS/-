// proizv strok.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include "stdafx.h"
#include <string> 
#include <stdio.h>
#include <conio.h>
using namespace std;
 
int main() 
{
    float a[100][100];
    float b[100];
    int i,n,m,j;
    cout<<"strok";
    cin>>n;
    cout<<"stolbcov";
    cin>>m;
    cout<<endl;
    for (i=0; i<n; i++)
        b[i]=1;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
        {
            cout<<"Enter ["<<i<<"]["<<j<<"] element";
            cin>>a[i][j];
            b[i]*=a[i][j];
        }
    for (i=0; i<n; i++)
        cout<<b[i]<<" ";
        _getch ();
	return 0;
}
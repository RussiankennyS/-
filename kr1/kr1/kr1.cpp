// kr1.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>

using namespace std;
 
int main() 
{   int n,s=0;
    cin>>n;
	char*str=new char[n];
	char simv;
	cout<<"vvedite prdl"<<endl;
	for(int i=0;i<n;i++)
	{
    cin>>str[i];
	}
	cout<<"vvedite simvol"<<endl;
	cin>>simv;
	for(int i=0;i<n;i++)
{	if (str[i]==simv)
	s++;
}
	cout<<s;
	
    _getch ();
	return 0;
}
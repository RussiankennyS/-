// 49.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <cstring>
using namespace std;
int main() 
{char *pt;
	char str[]= "labu sdal";
	pt=strstr(str,"sdal");
   cout<<pt<<endl;
	_getch ();
	return 0;
}
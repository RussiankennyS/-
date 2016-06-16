// char2 tochki.cpp: главный файл проекта.
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
 
void one_dot(char *str)
{
    char tmp[120];
    char *p = tmp;
    int j = 0;
    for(int i = 0;i<strlen(str); i++)
    {
        if(i == 0)
        {
            goto A;
            continue;
        }
        char c = *(str + i);
        char c2 = *(str + (i - 1));
        if(c2 == '.' && c == '.') continue;
        A: *(p + j++) = *(str + i);
    }
    *(p + j) = '\0';
    strcpy(str, "");
    strcpy(str, p);
}
int main()
{ char str[120];
    cout << "vvodi"<<endl;
    cin>>str;
    one_dot(str);
    cout << str << endl;
    system("pause");
    return 0;
}
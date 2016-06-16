// 48  v.2.1.2.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <random> 
using namespace std;
const int n=4;  
int main(){ 
    char *s[n]={"dog","apple","cat","bed"};
    for(int i=0;i<n-1;i++)
        for (int j=i; j<n; j++)
        { 
            if (s[i][0]>s[j][0]) 
            { 
                char *s2=s[i]; 
                s[i]=s[j]; 
                s[j]=s2; 
 
            }
        }
    for(int i=0;i<4;i++) 
        cout<<s[i]<<endl; 
    system("pause"); 
}


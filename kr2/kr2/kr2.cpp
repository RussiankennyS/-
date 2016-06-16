// kr2.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
using namespace std;
int**InitMatr(int,int);
int **Arifm(int**,int,int);
void Show(int**,int,int);
int main() 
{int n,m;
cin>>n>>m;
srand(time(0));
int**A;
int**B;
A=InitMatr(n,m);
Show(A,n,m);
system("pause");
B=Arifm(A,n,m);
Show(B,n,m);
system("pause");
_getch();
return 0;
}
int**InitMatr(int n,int m)
{int**matr=new int*[n];
for(int i=0;i<n;i++)
matr[i]=new int[m];
for(int i=0;i<n;i++)
{for(int j=0;j<m;j++)
matr[i][j]=rand()%10+1;
}
return matr;
}
void Show(int**M,int n,int m)
{for(int i=0;i<n;i++)
 {for(int j=0;j<m;j++)
 cout<<M[i][j]<<" ";
 cout<<endl;
 }
}
int **Arifm(int**A,int n,int m)
{int C=0;
   for(int i=0;i<n;i++)
 {for(int j=0;j<m-1;j++)
   {C=A[i][j]+A[i][j+1];
   C=C/2;
   A[i][j]=C;
   A[i][j+1]=C;
   C=0;
   }
 }
return A;
}

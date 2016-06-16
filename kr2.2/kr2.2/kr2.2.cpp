// kr2.2.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
using namespace std;
int**InitMatr(int,int);
int **Perestanovka(int**,int,int);
void Show(int**,int,int);
int**Delet(int**,int,int);
int main() 
{
srand(time(0));
int n,m;
cin>>n>>m;
int**A;
int**B;
A=InitMatr(n,m);
Show(A,n,m);
system("pause");
B=Perestanovka(A,n,m);
Show(B,n,m);
	_getch ();
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
int **Perestanovka(int**A,int n,int m)
{int b;
for (int i=0; i<n-1; i++)
{for (int k=0; k<n-1; k++)
{if (A[k][0]>A[k+1][0])
{for (int j=0; j<m; j++)
{
b=A[k][j];
A[k][j]=A[k+1][j];
A[k+1][j]=b;
}
}
}
}
return A;}
void Show(int**M,int n,int m)
{for(int i=0;i<n;i++)
 {for(int j=0;j<m;j++)
 cout<<M[i][j]<<" ";
 cout<<endl;
 }
}
int**Delet(int**M,int n,int m)
{ for(int i=0;i<n;i++)
	delete M;
    delete[]M;
	return M;
}
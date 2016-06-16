// 24.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
using namespace std;
int**InitMatr(int,int);
int Proverka(int,int);
void Show(int**,int,int);
int**Delet(int**,int,int);
int main() 
{
srand(time(0));
int n,m;
cin>>n>>m;
int**A=0;
int**B=0;
int*C=new int[n];
A=InitMatr(n,m);
Show(A,n,m);
system("pause");
B=InitMatr(n,m);
Show(B,n,m);
system("pause");
for(int i=0;i<n;i++)
  {for(int j=0;j<m;j++)
    C[i]+=Proverka(A[i][j],B[j][i]);
  }
for(int i=0;i<n;i++)
cout<<C[i]<<" ";
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
int Proverka(int A,int B)
{if(A!=B)
   {return A;
   }
else
   {return 0;
   }
}
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
// 3.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
using namespace std;
int n,m;
int**InitMatr(int,int);
int Proverka(int**);
int Vozr(int**);
void Show(int**,int,int);
void Delet(int**,int,int);
int main() 
{
srand(time(0));
cin>>n>>m;
int**A=0;
int C=1,S=0;
A=InitMatr(n,m);
Show(A,n,m);
system("pause");
S=Proverka(A);
cout<<S;
Delet(A,n,m);
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
int Vozr(int**A)
{int S=0;
int C=0;
for(int i=0;i<n;i++)
  {for(int j=0;j<m-1;j++)
 {if(A[i][j]<A[i][j+1])
 S+=1;
 }
 if(S==(m-1))
C++;
S=0;
}
 return C;
}
int Proverka(int**A)
{int S=0;
int C=1;
for(int i=0;i<n;i++)
  {for(int j=0;j<m-1;j++)
 {if(A[i][j]<A[i][j+1])
 C*=1;
 else
 C*=0;
 }
S+=C;
C=0;
}
 return S;
}
void Show(int**M,int n,int m)
{for(int i=0;i<n;i++)
 {for(int j=0;j<m;j++)
 cout<<M[i][j]<<" ";
 cout<<endl;
 }
}
void Delet(int**M,int n,int m)
{ for(int i=0;i<n;i++)
delete M;
delete[]M;
}

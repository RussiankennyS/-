// 16.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
using namespace std;
int n,m,x;
int**InitMatr(int,int);
int Proverka(int**);
void Show(int**,int,int);
//int**Delet(int**,int,int);
int main() 
{
srand(time(0));
cin>>n>>m>>x;
int**A=0;
int R;
A=InitMatr(n,m);
Show(A,n,m);
system("pause");
R=Proverka(A);
if(R==1)
cout<<"kol-vo nechet. srt. = zadanomu X";
else
cout<<"kol-vo nechet. srt. != zadanomu X";
//Delet(A,n,m);
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
int Proverka(int**A)
{int S=0;
int C=0;
for(int i=0;i<n;i++)
  {for(int j=0;j<m;j++)
  {if(A[i][j]%2!=0)
  S++;
  }
if(S==m)
C++;
S=0;
  }
if(C==x)
 return 1;
else
 return 0;}
void Show(int**M,int n,int m)
{for(int i=0;i<n;i++)
 {for(int j=0;j<m;j++)
 cout<<M[i][j]<<" ";
 cout<<endl;
 }
}
/*int**Delet(int**M,int n,int m)
{ for(int i=0;i<n;i++)
delete M;
delete[]M;
	return M;
}*/

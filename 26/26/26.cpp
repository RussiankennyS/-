// 26.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std; 

int main()
{int n,max,min,minN,maxN;
cout<<"Vvedite n"<<endl;
cin>>n;
int*arr=new int[n];
int*arr2=new int [n-2];
cout<<"Vvedite massiv"<<endl;
for(int i=0;i<=n-1;i++)
cin>>arr[i];
min=arr[0];
max=arr[0];
for(int i=1;i<n;i++)
{	if (arr[i]<min)
	 min=arr[i];
}
     for(int i=1;i<n;i++)
	 if (arr[i]>max)
{	 max=arr[i];
}
	 for(int i=1;i<n;i++)
		 if ((arr[i]!=max)&&(arr[i]!=min))
		 {
			 arr2[i]=arr[i];
		 }
		 for(int i=1;i<n-1;i++)
		 {
		 cout<<arr2[i]<<" ";
		 }
_getch();
return 0;
}



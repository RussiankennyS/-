// 28a.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
using namespace std;
 
struct igrushki {
    string name;
    int price;
	int vozrast;
};
 
void show(igrushki);
 
int main() {
    const int size = 4;
    igrushki*M= new igrushki[size];
	for(int i = 0; i < size; i++)
	{cout<<"input name   "<<i<<"  igrushki"<<endl;
	cin>>M[i].name;
	cout<<"price   "<<i<<"  igrushki"<<endl;
	cin>>M[i].price;
	cout<<"vozrastnoe ogranichenie  "<<i<<"  igrushki"<<endl;
	cin>>M[i].vozrast;
	}
    for(int i = 0; i < size; i++) {
        if((M[i].price <= 4) && (M[i].vozrast <5))
    {cout << "Name: " << M[i].name << endl;
    cout << "price: " << M[i].price << " " << "vozrast: " << M[i].vozrast << endl << endl; ;
	}
	}
    system("pause");
    return 0;
}
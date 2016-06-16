// evklid.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <random>
using namespace std;
int nod(int,int); 
 
int main()
{
    int n;
    int * arr;
    int nod_;
    cout << "kol-vo chisel" << endl;
    cin >> n;
    arr = new int[n] ;
    for (int i = 0; i < n; i++) {
        cout << "vvedite "<< i+1 << " chislo" <<endl;
        cin >> arr[i];
    }
    if (n >= 2) {
        nod_ = nod(arr[0],arr[1]);
    } else {
        nod_ = arr[0];
    }
    for (int i = 2 ; i < n ; i++) {
         nod_ = nod(nod_,arr[i]);
    }
    cout << "nod= "<< nod_  <<endl;
    system("pause");
    return 0;
}
int nod(int n, int m)
{
    if(m==0)
        return n;
    if(n>m)
        return nod(m,n-m);
    else
        return nod(n,m-n);
}
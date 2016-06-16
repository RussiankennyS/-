// treugolnik.cpp: главный файл проекта.


#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
 
int main(){
    int a,b,c;
    cin>>a>>b>>c;
        if(a<b&&a<c) 
        {
            cout<<a<<" , ";
            if(b<c)
                cout<<b<<" , "<<c;
            else
                cout<<c<<" , "<<b;
        }
        else if(b<a&&b<c) 
        {
            cout<<b<<" , ";
            if(a<c)
                cout<<a<<" , "<<c;
            else
                cout<<c<<" , "<<a;
        }
        else
        {
            cout<<c<<" , ";
            if(b<a)
                cout<<b<<" , "<<a;
            else
                cout<<a<<" , "<<b;
        }
		if(a<b+c && b<a+c && c<a+b)
		{
			double p,S;
				p=(a+b+c)/2.0;
			    S=sqrt((p*(p-a)*(p-c)*(p-b)));
                cout<<" ploshad= "<<S<<endl;
		}
		else
			cout<<"   ne sushestvuet!";
		_getch();
        return 0;
}

// 66.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <fstream> 
using namespace std;
/*char Sentence_words (char*);*/
int main()
{
    /*setlocale(LC_CTYPE,"Russian");*/ 
    const int k = 100; 
    char *ch = new char [k];
    char*buf;
    ifstream inarray("CharMass.txt");
    if (!inarray)
    {
        cout << "File can not be opened" << endl;
        return 0;
    }
    inarray.getline(ch, k, EOF);
   
 ofstream outfile("2.txt");
if(!outfile)
	{cout<<"errror"<<endl;
return 1;
    }
buf=strtok(ch, " ");
while (buf!= NULL)
{
   outfile<<buf<<endl;
   buf = strtok (NULL, " ");
}

/*for(int i=0;i<k;i++)
 {if (ch[i]==" ")
 ch[i]="/n";
} 
for(int i=0;i<k;i++)
outfile<<ch[i];
*/
    outfile.close();
	inarray.close();
    _getch();
    return 0;

}
/*char Sentence_words (char str)
{
 int len, counter=0;
 const int words = 30;
 char  * iwords[words];
 char *pstr;
 pstr = strtok(str," ");
 while (pstr != NULL)
 {
     len = strlen (pstr)+1;
     iwords[counter] = new char [len];
    
      strcpy_s(iwords[counter], len, pstr);
 cout << iwords[counter++] << " pstr " <<endl;

     pstr = strtok(NULL," ");
	 return pstr;
 
 }
}
*/
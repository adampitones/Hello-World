//#include "std_lib_facilities.h"
#include <iostream>

using namespace std;

int main()
{
string str;
int ID;
string j;
cout<<"Enter a word: \n";
cin>>str;	

for (int i = 0; i < str.length(); ++i){
      str[i]= toupper(str[i]);
      }
      if(str=="ADAM"){
       ID=10236;
       }
        else if(str=="ESTEBAN"){
        ID=92365;} 
        else{  cout<<"Sorry no such customer exists";
          return 0;
       }
       cout<<ID;
       cout<<"hey\n"<<str;
       //cin>>j;
      
}
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
   string s , str;
   bool initItalic , initNegrito;
   getline(cin,str);

   while(!cin.eof())
   {
      initItalic = initNegrito = false;
      s.clear();

      for(string::iterator  it = str.begin()  ; it != str.end() ; ++it)
      {

         if(*it == '_')
         {
             if(initItalic){
                s+= "</i>";
                initItalic = false;
             }
             else{
                s+= "<i>";
                initItalic = true;
             }
         }

         else if(*it == '*')
         {
             if(initNegrito){
                s+= "</b>";
                initNegrito = false;
             }
             else{
                s+= "<b>";
                initNegrito = true;
             }
         }
         else{
            s += *it;
         }

      }

      cout << s << endl;

      getline(cin,str);

   }

   return 0;
}

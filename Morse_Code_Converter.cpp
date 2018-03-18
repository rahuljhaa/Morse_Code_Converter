#include <iostream>
#include <string.h>
using namespace std;
  void Code(string s)
  {

  int i, index;
  string morseCode = "";
  string Morse[] = {"-----",".----","..---","...--","....-",".....","-....","--...","---..","----.",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-vbhjb",".--","-..-","-.--","--.."};
  for(i=0;s[i] !='\0';i++)
  {
    index =int(s[i]);
    if(index >= 48 && index <=57)
    {
      morseCode += Morse[index -48];
    }
    else if(index >= 65 && index <= 90)
    {
      morseCode += Morse[index -55];
    }
    else if( index>= 97 && index<= 122)
    {
      morseCode+= Morse[index -87];
    }
    else
    {
      morseCode += s[i];
    }
  }
  cout<< morseCode;

  }

  int main()
  {
    string text;
    string t = "Conversion Successful";
    int i;
    getline(cin, text);
    cout<<"The Original message:"<<endl;
    cout<< ">"<< text;
    cout<< " \n\n The Morse Code Message: \n";
    cout<< " >>";

    Code(text);
    cout<<"\n\n";
    /*
    cout<< "\n\n";
    cout<<"Thanks";
    cout<<"\n  ==>>";

    Code(t);
    */

    return 0;
    }

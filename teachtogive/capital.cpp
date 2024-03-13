#include<iostream>
#include<string>
#include<Cctype>
using namespace std;
  
  string conversion(string){
    string firstLetter;
    if(!firstLetter.empty()){
        firstLetter[0]=toupper(firstLetter[0]);
    }
return firstLetter;
  }
  int main(){
    string input;
    cout<<"enter a word";
    cin>>input;
    string capital= conversion(input);
    cout<<input<< " is converted to "<<capital<<endl;
    return 0;

  }
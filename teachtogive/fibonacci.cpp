#include<iostream>
using namespace std;
int main(){
    int firstNumber=0,secondNumber=1,sumNumber;
    sumNumber= firstNumber+firstNumber;
cout<<"fibonacii series to 100 is"<<firstNumber<<"," <<secondNumber;

    while(sumNumber<=100){
        cout<<","<<sumNumber;
        firstNumber=secondNumber;
        secondNumber=sumNumber;
        sumNumber=firstNumber+secondNumber;
    }
    cout<<endl;
return 0;
}
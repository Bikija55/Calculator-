#include<iostream>
using namespace std ;

int main(){

    float no1,no2;
    char op;
    
    cout<< "enter first number:";
    cin>>no1;
    
    cout<< "enter operator(+,-,*,/):";
    cin>>op;
    
    cout<< "enter second number:";
    cin>>no2;
    
    float result;
    
    switch(op){
    case'+':
    result=no1+no2;
    break;
    
    case'-':
    result=no1-no2;
    break;
    
    
    case'*':
    result=no1*no2;
    break;
    
    
     case'/':
    result=no1/no2;
    break;
    }
    cout<< result;
    cin>>op;
    return 0;
}            
        
    
    
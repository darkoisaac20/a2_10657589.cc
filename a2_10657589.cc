#include <iostream>

using namespace std;

int main()
{
   int value;
   bool isPrime = true;

   cout << "Enter a number:";
   cin >> value; // user input

   for(int i=2; value>i;i++){
    if(value%i==0){
        isPrime = false;
        break;
    }
   }
    if(isPrime == true && value > 1){
        cout << value << " is  prime" << endl;
    }else{
        cout << value <<" is not prime" << endl;
    }




   return 0;
}

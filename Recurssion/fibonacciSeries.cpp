/*
Author - Yashmi Kumarasiri
Date modified - 30/10/2021
*/

#include <iostream>


using namespace std;
int fibonacci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonacci(x-1)+fibonacci(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of occurances you need to have : ";
   cin >> x;
   cout << "\nfibonacci Series : ";
   while(i < x) {
      cout << " " << fibonacci(i);
      i++;
   }
   return 0;
}
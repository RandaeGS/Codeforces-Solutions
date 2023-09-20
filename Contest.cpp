#include <algorithm>
#include <iostream>
using namespace std;
int main(){
   int a,b,c,d,vasya,misha;

   cin >> a >> b >> c >> d;

   vasya = max((3*a)/10,a - ((a/250)*c));
   misha = max((3*b)/10,b - ((b/250)*d));

   if (vasya < misha) {
      cout << "Vasya";
   }else if (vasya > misha) {
      cout << "Misha";
   }else {
      cout << "Tie";
   }
}
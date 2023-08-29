#include <iostream>

using namespace std;
int main(){

   int n, fingers=0, aux, pos = 0, i;

   cin >> n;

   i = n;
   while (i) {
      cin >> aux;
      fingers += aux;
      i--;
   }

   aux = 0;

   for (int i = 0; i < 5; i++) {
      fingers++;
      if (fingers % (n+1) != 1) {
         aux++;
      }
   }


   cout << aux;
}
#include <iostream>

using namespace std;
int main()
{

   int n,i,max, aux;
   i=max=aux=0;

   cin >> n;

   while (i < n) {
      
      int a,b;
      cin >> a >> b;

      aux -= a;
      aux += b;

      if (aux > max) {
         max = aux;
      }

      i++;
   }
   
   cout << max;
}

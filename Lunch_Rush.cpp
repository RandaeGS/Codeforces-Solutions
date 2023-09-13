#include <iostream>
using namespace std;
int main(){
   int n, k, f, t, res, aux;
   n=k=f=t=res=aux=0;

   cin >> n >> k;

   int i = 0;
   while (i < n) {
      cin >> f >> t;
      if (t > k) {
         aux = f - (t-k);
      }else {
         aux = f;
      }

      if (aux > res || i == 0) {
         res = aux;
      }
      i++;
   }

   cout << res;
}
#include <iostream>
using namespace std;
int main(){
   int n, b, d;
   int aux, res;
   aux = res = 0;

   cin >> n >> b >> d;

   int arr[n];

   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }

   for (int i = 0; i < n; i++) {
      if (arr[i] <= b) {
         aux += arr[i];
         if (aux > d) {
            aux = 0;
            res++;
         }
      }
   }

   cout << res;
}
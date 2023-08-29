#include <iostream>

int main()
{

   int n=0;

   while (n>1000 || n<1) {
      std::cin >> n;
   }

   int arr[n+1], i = 0, cant=0;

   while (i < n) {
      std::cin >> arr[i];
      i++;
   }

   i=1;
   while (i < n) {
      bool mayor, menor;
      mayor = menor = false;

      for (int j = 0; j < i; j++) {
         if (arr[j] > arr[i]) {
            mayor = true;
         }
         else if (arr[j] < arr[i]) {
            menor = true;
         }
         else if (arr[j] == arr[i]) {
            menor = mayor;
            break;
         }      
      }
      if (mayor != menor) {
         cant++;
      }
      i++;
   }

   std::cout << cant;
}

#include <iostream>
#include <string>

using namespace std;
int main(){

   string arr;
   int x = 1;

   cin >> arr;

   for (int i = 0; i < arr.size()-1; i++) {
      
      for (int j = i; j < arr.size()-1; j++) {
         if (arr[j+1] != arr[j]) {
            break;
         }else {
            x++;
         }
      }
      if (x < 7) {
         x=1;
      }

   }

   if (x >= 7) {
      cout << "YES";
   }else {
      cout << "NO";
   }
}



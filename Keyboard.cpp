#include <iostream>
#include <string>

using namespace std;
int main(){

   char board[3][10] = {'q','w','e','r','t','y','u','i','o','p',
                        'a','s','d','f','g','h','j','k','l',';',
                        'z','x','c','v','b','n','m',',','.','/'};


   char shift;
   string arr;
   bool aux = false;
   cin >> shift;
   cin >> arr;
   char arr2[arr.size()];

   for (int i = 0; i < arr.size(); i++) {

      for (int j = 0; j < 3 && !aux; j++) {
         for (int k = 0; k < 10; k++) {
            if (board[j][k] == arr.at(i)) {
               if (shift == 'R') {
                  arr2[i] = board[j][k-1];
               }else {
                  arr2[i] = board[j][k+1];
               }
               break;
            }
         }
      }
   }

   for (int i = 0; i < arr.size(); i++) {
      cout << arr2[i];
   }
}
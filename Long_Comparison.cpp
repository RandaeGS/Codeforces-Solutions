#include <iostream>
#include <math.h>
using namespace std;
int main(){
   int n, x, y, p1, p2;

   cin >> n;

   int i = 0;
   while (i < n) {
      cin >> x >> p1;
      cin >> y >> p2;

      x *= pow(10, p1);
      y *= pow(10, p2);

      if (x > y) {
         cout << ">" << endl;
      }else if (x < y) {
         cout << "<" << endl;
      }else if (x == y) {
         cout << "=" << endl;
      }
      i++;
   }
}
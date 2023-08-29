#include <iostream>

using namespace std;
int main()
{

   int n, i=0, a,b,c, cant=0;

   cin >> n;

   while (i < n) {
   
      a=b=c=0;

      cin >> a >> b >> c;

      if ((a&&b) || (a&&c) || (b&&c)) {
         cant++;
      }

      i++;
   }

   cout << cant;

}

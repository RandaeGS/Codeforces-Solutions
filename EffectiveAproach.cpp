#include<iostream>
#include<cmath>
#include<algorithm>
int arr[100010];
int b[100010];
typedef long long ll;

using namespace std;
int main()
{
   int n,m,c,x,d;
   ll vasya=0,petya=0;
   cin>>n;

   for(int i=0;i<n;i++){
      cin>>c;
      arr[c]=i;
   }

   cin>>m;
   for(int i=0;i<m;i++){

      cin>>x;
      int d=arr[x];
      vasya+=d+1;
      petya+=n-d;

   }

   cout<<vasya<<" "<<petya<<endl;
   return 0;
}
#include <iostream>
using namespace std;                    //print no. till n or untill infinty
int main() {
   int n;
   int i=1;
   cin>>n;
   while (i>=1){
       cout<<i<<' ';
       
       if (i==n){
           break;
       }
       i=i+1;
   }

}

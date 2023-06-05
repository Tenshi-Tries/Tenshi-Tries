#include <bits/stdc++.h>
using namespace std;

int main() {
   int size, arr[100];
   
   cout << "Enter array size: "<< endl;
   cin >> size;
   
   int i;
   for(i = 0; i < size; i++){
       cout << "Enter " << "element " << (i+1) << ":" <<endl;
       cin >> arr[i];
   }
   int n = sizeof(arr)/sizeof(arr[0]);
   sort(arr, arr+n);
   for(i = 0; i < size; i++){
       cout << arr[i] << endl;
      
   }
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

 void display(int *p, int n)
 {
     for(int i =0; i < n; ++i)
     {
         cout << setw(4) << p[i];
     }
         cout << endl;
 }

 int main()
 {
     int x [100];
     int n;
     cout << "input How many integer elements that you want process: ";
     cin >> n;
     int *p {new int[n]};//allocating using uniform initialization
     //int *p = new int [n]; // alternative traditional approach of the previous statement
     int *ptr = new int(10); //single allocation object allocation in heap

     for(int i = 0; i < n; ++i)
     {
         cout << "New Int:" ;
         cin >> *(p + i);

     }

     display (p, n);
     delete [] p;
     delete ptr;
     return 0;
 }
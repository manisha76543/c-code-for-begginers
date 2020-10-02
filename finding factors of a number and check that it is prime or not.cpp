
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i, n, count;
    
    cout << "Enter the number:";
    cin >> n;
    
    cout << "Factors are: 1 ";
    
    for(i =2, count = 2; i <= sqrt(n); ++i)
    {
        if(n % i ==0)
        {
            cout << i << " ";
            count++;
        
        if(i != n/i)
         {
            cout << n/i << " ";
            count++;
          
            
           }
       
        }
        
    }
        
        cout << n << endl;
        cout << "Total number of factors:" << count <<endl;
        
        //To check whether factors are prime number or not?
        
        if(count == 2)
            {
                cout << "Yes, " << n << " is a prime number" << endl;
                    }
                    else
                       {
                           cout << "No, " << n << " is not a prime number" << endl;
                       }
        return 0;
}
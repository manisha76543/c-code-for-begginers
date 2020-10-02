#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("myfile.txt");
    if(fout.fail())
    {
        cout << "Error opening file :-(" << endl;
        exit(1);
    }

    fout << "Hello World !!" << endl;
    fout << "This will be my second line" << endl;

    int a = 35;
    double p = 35.37;
    double s = (double)a + p;
    fout << "a = " << a << ", p = " << p << endl;
    fout <<  "Sum = " << s << endl;
    fout.close();

    return  0;
}
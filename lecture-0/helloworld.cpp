#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World \n";
     int a = 10;
    int b = 12;
    cout << a+b; 
    bool g = 3;
    cout << g;
    cout << a++ << endl << a;

    cout << a++;

    int a = 2;
    a = ~a;
    a=a>>7;
    cout << a;
    return 0;

    for(int i=0;i<10;i++)
        cout << i<< endl;
    cout<<"hello";

    int i = 10;
    while (i<=10) {
        cout << i << endl;
        i++;
    }
    do{
        cout << i << endl;
        i--;
    } while (i>=1) ;
    for( int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            cout << "*" << endl  ;
        }
    }

    
    
    
    
    
}

#include <iostream>

using namespace std;
int number(int n){
if (n==0){
    return 0;
    }
int soutput=number(n-1);
int output=n+soutput;
}

int main()
{
    int n;
    cout << "enter sny number" ;
    cin >> n ;
    cout << number(n);
    return 0;
}

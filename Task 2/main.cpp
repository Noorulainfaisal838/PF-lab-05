#include<iostream>
using namespace std;
int main (){
    int n, sum = 0;
    cout << "enter a natural numbers:",
    cin >> n;
    for (int i=1; i <=n; i++){
        sum += i;
    }
    cout <<"the sum of first"<< n <<"natural numbers is :"<< sum << endl;
    return 0;
    }
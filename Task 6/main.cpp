#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< "enter an integer:";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << "cube of" << i << "=" << (i * i * i) <<endl;
    }
    return 0;
}
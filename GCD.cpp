#include <iostream>
using namespace std;

int main() {
    int n=5,result=1;

    for(int i=1;i<=n;i++){
        result*=i;
    }

    cout<<"Example program: GCD"<<endl;
    cout<<"Result value: "<<result<<endl;

    return 0;
}
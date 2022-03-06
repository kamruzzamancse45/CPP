#include<iostream>
using namespace std;

int main(){
    int a;
    cin>> a;

    if (a == 10){
        cout<< "value of a is 10" <<endl;
    }
    else if (a == 20){
        cout<< "value of a is 20" << endl;

    }
    else if(a == 30) {
        cout<< "value of a is 30"<< endl;
    }
    else if(a == 40) {
        cout<< "value of a is 40" << endl;
    }
    else{
        cout << "value of a is not matching" << endl;
    }
    cout<< "Exact value of a is: " << a << endl;


    return 0;
}

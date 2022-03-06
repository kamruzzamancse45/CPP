#include<iostream>
using namespace std;

int max(int num1, int num2);

int main(){
    int a = 100;
    int b = 200;
    int ret;

    //clling function to get max value.
    ret = max(a,b);
    cout<< "Max value is : " << ret << endl;

    return 0;
}

//function returing the max between two numbers
int max(int num1, int num2){
    int result;

    if (num1 > num2){
        result = num1;
    }
    else
        result = num2;

    return result;
}

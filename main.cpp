#include <iostream>
#include "string.h"
#include <random>
#include <cmath>
using namespace std;

void D_script(int a,int b,int c){
    int new_A = pow(a,2);
    //cout<<new_A<<" "<<b<<" "<<c<<endl;
    int D = new_A - 4 * b * c;
    //cout<<D<<endl;
    if(D>0){
        int new_B = 0 - b;
        //cout<<new_B<<"!!!!!!!!!!!!"<<endl;
        int x_1 = new_B - sqrt(D) / 2 * a;
        int x_2 = new_B + sqrt(D) / 2 * a;
        cout<<"D: "<<D<<endl;
        cout<<"X1: "<<x_1<<endl;
        cout<<"X2: "<<x_2<<endl;
    } else if (D<0){
        cout<<"D: "<<D<<" - дискриминант меньше нуля: значит не существует вещественных корней, а только комплексные корни"<<endl;
    } else cout<<"D: "<<D<<" - дискриминант равен нулю: значит существует один вещественный корень, график функции пересекает ось Х в одном месте"<<endl;
}

int main(){
    int a, b, c;
    cout<<"A";
    cin>>a;
    cout<<"B";
    cin>>b;
    cout<<"C";
    cin>>c;
   // int test = pow(a,2);
   // cout<<test<<endl;
    D_script(a,b,c);
    system("pause");
    return 0;
}
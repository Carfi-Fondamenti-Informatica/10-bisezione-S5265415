#include <iostream>
#include <cmath>

using namespace std;

float f(float x){
    return pow(x,2)-cos(x);
}

int main() {
    float a, b, m;
        cout << "inserire estremi";
        cin >> a >> b;
    while ((b-a)/2>0.0001){
        m= (a+b)/2;
        f(m);
        if(f(m)==0){
            a=m;
            b=m;
            cout<< m;
            cout << f(m);
        }else
        { if (f(m)<0) {
            a=m;
        }else{
                    b=m;
        }
        }
    }
    return 0;
}


//program.....
#include <iostream>
using namespace std;
float circle (int r);

int main() {
    int radius;
    float Area;
    cout << "enter radius"<<endl;
    cin>>radius;
    Area=circle(radius);
    cout<<"the area is"<<Area<<endl;
    return 0;
}
float circle(int r){
    float area;
    area=3.142*r*r;
return area;
}

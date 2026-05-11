#include <iostream>
using namespace std;

class triangle {
    private :
    float side1;
     float side2;
      float side3;

    public:
    void getData();
    void displayTri();
};

void triangle :: getData() {
 cout<<"enter side1 : " ;
 cin >> side1 ;
 cout<<"enter side2 : " ;
 cin >> side2 ;
 cout<<"enter side3 : " ;
 cin >> side3 ;
}

void triangle :: displayTri() { // using if else for triangle analysis 
if(side1==side2 && side2==side3 && side3==side1){
    cout<<"triangle is equilateral";
}

else if(side1==side2 || side2==side3 || side3==side1 ){
    cout<<"triangle is isosceles";
}

else{
    cout<<"triangle is scalene" ;
}
}

    int main(){
        triangle tr;
        tr.getData();
        tr.displayTri();
    }


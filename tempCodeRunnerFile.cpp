#include<cmath>
#include<iostream>
using namespace std;
double deg2rad(double deg){
    double rad = (deg*(M_PI))/180;
    //180 deg = 1 pi rad
    //180 deg/pi = 1 rad
    //1 deg = 1 pi/ 180
    return rad;
}
double rad2deg(double rad){
    double deg = (rad*180)/(M_PI);
    return deg;
}
double findXComponent(double vec1, double vec2, double deg1, double deg2){
    double xvec1 = vec1*cos(deg1);
    double xvec2 = vec2*cos(deg2);
return xvec1 + xvec2;
}
double findYComponent(double vec1, double vec2, double deg1, double deg2){
    double yvec1 = vec1*sin(deg1);
    double yvec2 = vec2*sin(deg2);
return yvec1 + yvec2;
}
double pythagoras(double xvec ,double yvec){
    double firstx = pow(xvec,2);
    double firsty = pow(yvec,2);
    double result = pow((firstx+firsty),0.5);
    return result;
}
void showResult(double xlength,double ylength){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout << "Length of the resultant vector = "<<xlength<<endl;
    cout << "Direction of the resultant vector (deg) = "<<ylength<<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
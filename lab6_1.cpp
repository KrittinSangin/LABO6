#include<iostream>
using namespace std;
int x=1,odd = 0,even = 0;
int main(){
    while(x!=0){
    cout << "Enter an integer: ";
    cin >> x;
    if(x!=0){
    if(x%2 == 0 ){
        even += 1;
    }else{
        odd +=1;
            }
        }
    }
    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}

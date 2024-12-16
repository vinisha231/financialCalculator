#include <iostream>
using namespace std; 

double a (double p, double n, double i){
    double interest = i/100;
    double v = (1/(interest+1)); 
    double vpowern = pow(v, n); 
    double calc = ((1- vpowern)/interest); 
    return calc; 
}

double adoubledots(double p, double n, double i ){
    double interest = i/100;
    double discount = interest / (1+interest); 
    double v = (1/(interest+1)); 
    double vpowern = pow(v, n); 
    double calc = ((1- vpowern)/interest); 
    return calc; 
}

double ipqadoubledots (double p, double q, double n, double i){
    double first = (p * (q/i));
    double second = a(first, n,i); 
    return 0; 
}

int main() { 
    int choice; 
    double i, p, q, d, delta, n; 
    cout << "Which calc do you want to do?" << endl; 
    cout << " Option 1: a n, i " << endl; 
    cout << " Option 2: a doubledots n i " << endl; 
    cin >> choice; 
    cout << "Enter payment amount: "; 
        cin >> p; 
        cout << "Enter number of years: "; 
        cin >> n; 
        cout << "Enter interest rate: "; 
        cin >> i; 
    if (choice == 1){
        cout << a (p, n, i) << endl;
    }
    else if(choice == 2){
        cout << adoubledots(p,n,i) << endl; 
    }
    else{
        cout <<" Invalid input" << endl; 
    }

}

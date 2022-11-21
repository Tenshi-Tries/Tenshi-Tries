#include <iostream>
using namespace std;

void oddEVEN(){
    int num;
    cout << "Enter Number: " << endl;
    cin >> num;
    
    if (num % 2 == 0)
        cout << "EVEN" << endl;
    else 
        cout << "ODD";
    
}

void gradeRemarks(){
int grade;

cout << "Enter Grade" << endl;
cin>>grade;

if(grade>=75 && grade!=0 && grade<=100){
	if (grade >= 90){
	cout << "Remarks: A+";}
	else if (grade<90 && grade>=85){
	cout << "Remarks: B+";}
	else if (grade<85 && grade>=80){
	cout << "Remarks: B";}
	else if (grade<80 && grade>=77){
	cout << "Remarks: C+";}
    else if (grade<77 && grade>=70){
	cout << "Remarks: C-";}
	}
else {cout << "Remarks: Failed";}
}

void allCalc(){
double num1, num2, sum, diff, prod, quo;

cout << "Enter first number: ";
cin >> num1;
cout << endl << "Enter second number: ";
cin >> num2;

//FORMULAS
sum = num1 + num2 ;                            
diff = num1 - num2 ;
prod = num1 * num2;
quo = num1 / num2;
//OUTPUT
cout << "Sum: " << sum << endl;
cout << "Difference: " << diff << endl;
cout << "Product: " << prod << endl;
cout << "Quotient: " << quo << endl;
}

void sumOWRESTLER(){

int i, n, sum;

cout << "Enter how many numbers you'll add: " << endl;
cin >> i;

do{
    cout << "add: ";
    cin >> n;
    sum = sum + n; // pwede din dito -- sum += n;
    i--;
    cout << "Updated sum: " << sum << endl;
} while (i > 0);

cout << "Overall sum: " << sum;
}

void triangleDAW(){

for (int i = 1 ; i <= 5 ; i++){
    for (int a = 1; a <= i; a++ ){
        cout << "*";
    }
    cout << endl;
}
}

int main(){
bool Y = true, N = false;


return 0;
}
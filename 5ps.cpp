#include <iostream>
using namespace std;

void oddEven(){
    int num;
    cout << "Enter Number: " ;
    cin >> num;
    
    if (num % 2 == 0)
        cout << endl << num << " is EVEN" << endl;
    else 
        cout << endl << num << " is ODD" << endl;
    
}

void gradeRemarks(){
int grade;

cout << "Enter Grade: " << endl;
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

void sumOwrestler(){

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
bool menu;
int choice;
char answer;
for (int i = 1 ; i >= 1 ; ){
    for (int a = 1 ; a > 0 ; ){
        cout << "\nChoose a Program:\n"
            "[1] Arithmetic\n"
            "[2] Grading\n"
            "[3] Odd or Even\n"
            "[4] Sum of All Numbers\n"
            "[5] Triangle\n"
            "\nEnter your choice: ";
        cin >> choice;

        if (choice != 0 &&choice <= 5){
            switch (choice){
            case 1:
                allCalc();
                break;
            case 2:
                gradeRemarks();
                break;
            case 3:
                oddEven();
                break;
            case 4:
                sumOwrestler();
                break;
            case 5:
                triangleDAW();
                break;
            default:
                cout << endl << "Error input. Please try again." << endl;
            }
            a--; 

        }else
            cout << endl << "Error input. Please try again..." << endl;
    }
    
    do{
    cout << endl << "Do you still want to use this program? [y/n] : " << endl;
    cin >> answer;
        if (answer == 'y')
        {
            i++;
        }
        else if (answer == 'n'){
            cout << endl << "Thank you for using my program.";
            i = 0;}
        else {
                cout << "Error input. Try Again." << endl;}
        } while (answer != 'n' && answer != 'y');
    }

return 0;
}

/*
========================================================
BUG(s) I CATCHED:
1] IF USER INPUT A CHAR/STRING ON PROGRAM NUMBER PROMPT,
THE PROMPT WILL CONTINUALLY PRINT UNTIL TERMINATED.
2]
========================================================


========================================================
ORIGINAL CODE BY:
JOSEPHINE BONDOC - AMACC TARLAC - BS COMSCI

FINISHED ON:
01:53 (TUE) 11/22/2022 :< :>
========================================================
*/
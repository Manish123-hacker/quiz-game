#include<iostream>
using namespace std;
int answer1;
int answer2;
int answer3;
int main(){
    cout<<"QUIZ GAME";
    cout << "Q1. Which language are we using?" << endl;
    cout << "1. Python" << endl;
    cout << "2. C++" << endl;
    cout << "3. Java" << endl;
    cout << "4. HTML" << endl;

    cout << "Enter your answer (1-4): ";
    cin>>answer1;
   
   

    cout << "\nQ2. Which data type stores whole numbers in C++?" << endl;
    cout << "1. float" << endl;
    cout << "2. char" << endl;
    cout << "3. int" << endl;
    cout << "4. string" << endl;

    cout << "Enter your answer (1-4): ";
    cin >> answer2;

   

    cout << "\nQ3. Which symbol is used to end a statement in C++?" << endl;
    cout << "1. : " << endl;
    cout << "2. ; " << endl;
    cout << "3. , " << endl;
    cout << "4. . " << endl;

    cout << "Enter your answer (1-4): ";
    cin >> answer3;
    int score = 0;
     if (answer1 == 2) {
    cout << "Q1 Correct!" << endl;
    score++;
} else {
    cout << "Q1 Wrong!" << endl;
}

// Question 2: Correct answer is 3
if (answer2 == 3) {
    cout << "Q2 Correct!" << endl;
    score++;
} else {
    cout << "Q2 Wrong!" << endl;
}

// Question 3: Correct answer is 2
if (answer3 == 2) {
    cout << "Q3 Correct!" << endl;
    score++;
} else {
    cout << "Q3 Wrong!" << endl;
}

cout << "Your final score: " << score << "/3" << endl;

return 0;






    
}
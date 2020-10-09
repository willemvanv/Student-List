#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

//Willem van Veldhuisen
//10/05/20


//Student struct
struct student {
  char firstName[99];
  char lastName[99];
  int id;
  float gpa;
};

//Declaring functions
void Add(student *a);
void Print(int b, student a[99]);

//Main
int main() {
  //Variables
  int count = 0;
  student arr[99];
  bool running = true;
  char input[10];
  
  //Loop that runs program
  while (running == true) {
    //Get command
    cin.getline (input, 10);
    //Execute program based on command
    if (input[0] == 'a' && input[1] == 'd' && input[2] == 'd') {
      Add(&arr[count]);
      count++;
    }
    if (input[0] == 'p' && input[1] == 'r' && input[2] == 'i' && input[3] == 'n' &&
	input[4] == 't') {
      Print(count, arr);
    }
    if (input[0] == 'q' && input[1] == 'u' && input[2] == 'i' && input[3] == 't') {
      running = false;
    }
    if (input[0] == 'd' && input[1] == 'e' && input[2] == 'l' && input[3] == 'e' &&
	input[4] == 't' && input[5] == 'e') {
      //Mark input as null
      cout << endl;
      char inputa[10];
      cout << "Enter id" << endl;
      cin.getline (inputa, 10);
      string c(inputa);
      int d = stoi (c, nullptr);
      for (int i = 0; i < count; i++) {
	if (arr[i].id == d) {
	  arr[i].id = 0;
	}
      }
    }
    cout << endl;
    input[0] = 'x';
  }
  return 0;
}

//Print student list method
void Print(int b, student a[99]) {
  cout << endl;
  for (int i = 0; i < b; i++) {
    //Check for deleted data
    if (a[i].id != 0) {
      cout << a[i].firstName << ' ' << a[i].lastName << ", " << a[i].id << ", " <<
	a[i].gpa << endl;
    }
  }
}
//Add student method
void Add(student *a) {
  cout << endl;
  cout << "Enter First Name" << endl;
  cin.getline (a->firstName, 99);
  cout << "Enter Last Name" << endl;
  cin.getline (a->lastName, 99);
  cout << "Enter id" << endl;
  cin >> a->id;
  cout << "Enter gpa" << endl;
  cin >> a->gpa;
}

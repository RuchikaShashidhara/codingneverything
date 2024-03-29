/*
https://www.hackerrank.com/challenges/30-class-vs-instance/problem
*/
using namespace std;
#include <iostream>

class Person
{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
};

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if (initialAge >= 0)
            this -> age = initialAge;
        else {
            this -> age = 0;
            cout << "Age is not valid, setting age to 0.\n";
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (this -> age < 13)
            cout << "You are young.\n";
        else if (this -> age >= 18)
            cout << "You are old.\n";
        else
            cout << "You are a teenager.\n";
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        this -> age = this -> age + 1;
    }

/*
Sample Input

4
-1
10
16
18

Sample Output

Age is not valid, setting age to 0.
You are young.
You are young.

You are young.
You are a teenager.

You are a teenager.
You are old.

You are old.
You are old.
*/

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class stackarray {
private:
	string stack_array[5];
	int top;

public:
	stackarray() {
		top = -1;
	}

	void push() {
		cout << "\nEnter a element : ";
		string element;
		getline(cin, element);
		if (top == 4) { // step 1
			cout << " Number of data exceeds the limit." << endl;
			return;
		}
		top++; // step 2
		stack_array[top] = element; // step 3
		cout << endl;
		cout << element << " ditambahkan (pushed)" << endl;
	}
	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl;
			return;
		}
		cout << "\nThe popped element is : " << stack_array[top] << endl;
		top--;
	}

	bool empty(){
		return (top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nStack is empty. " << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}

};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

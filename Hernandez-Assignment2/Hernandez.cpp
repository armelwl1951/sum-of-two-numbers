// Chapter 2, Programming Challenge 1: Sum of Two Numbers

#include <iostream>
using namespace std;

int main()
{
	//Store the input digits in num1 and num2
        int num1,num2;
        cout<<"Enter first digit \n";
        cin>>num1;
        cout<<"Enter second digit \n";
        cin>>num2;

	//Store the sum of num1 and num2 in total.
	int total = num1 + num2;
	cout << "The total is " << total << endl;
	system("PAUSE");
	return 0;
}

#include <iostream>
using namespace std;
int main()
{

	// cout<<"------check char is lowercse ,uppercase & numeric-----\n\n";
	/*
		char ch;
	   cin>>ch;
		if(ch>='a' && ch<='z')
		{
			cout<<"This is lowercase"<< endl;
		}
		else if(ch>='A' && ch<='Z')
		{
			cout<<"This is uppercase"<< endl;
		}
		else if(ch>='0' && ch<='9')
		{
			cout<<"This is numeric"<< endl;
		}
	*/

	/*
			cout << "------while loopc 1 to n--------\n\n";
			int n;
			cin >> n;
			int i = 0;
			while (i < 5)
			{
				cout << i << " "<< "\n";

				i++;
			}
		*/

/*
	cout << "------while loopc 1 to n--------\n\n";
	int n, i = 2;

	cout << "\nPlease Enter Maximum limit Value to print Even Numbers =  ";
	cin >> n;

	cout << "\nList of Even Numbers from 1 to " <<n << " are\n";
	while (i <= n)
	{
		cout << i << " ";
		i = i + 2;
	}
*/


	/*
	cout<< "-----while loop sum 1 to n------\n";

		int n, i = 1, sum = 0;
		cout << "Enter number:" << endl;
		cin >> n;
		cout << endl;
		while (i <= n)
		{
			sum += i;
			i++;
		}
		cout << "Sum N no. is " << sum << endl;
	*/


	cout<< "-----while loop sum 1 to n even number------\n";

	int n;
	int i = 2;
	int sum =0;
	cin >> n;
	cout<<endl;
	while (i<=n)
	{
		 if(i%2 == 0)  
        {  
            sum = sum + i;  
        }  
        i++;  
		
	}
		cout << "Sum of N even no. is " << sum << endl;
	




	return 0;
}
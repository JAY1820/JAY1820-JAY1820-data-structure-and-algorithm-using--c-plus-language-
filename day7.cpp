#include <iostream>
using namespace std;
int main()
{

    /*
    1) pattern
                      ---*
                      --**
                      -***
                      ****
    */
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space <= n - i; space--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }






    return 1;
}

#include <iostream>
using namespace std;

// void NumericHollowPattern(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//            if(j == 0 || j == i || i == n - 1){
//             cout<<j+1;
//            }else{
//             cout<<" ";
//            }
//         }
//         cout << endl;
//     }
// }

void InvertedHollowPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (j == i+1 || j == n || i==0)
            {
                cout << j ;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // Pattern1:NumericHollowPattern()
    // NumericHollowPattern(5);

    // Pattern2: InvertedHollowPattern(5)
    InvertedHollowPattern(5);
}
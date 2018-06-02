#include <iostream>

using namespace std;

int main()
{
    int prices[5], i, saida, j, auxMax, auxMin, maxProfit = -100000;
    cout << "Digite as entradas!" << endl;
    for(i = 0; i < 5; i++)
    {
        cin >> prices[i];
    }
    for(i = 0; i < 5 ; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if ((prices[j] - prices[i]) > maxProfit)
            {
                maxProfit = prices[j] - prices[i];
            }
        }
    }
    cout << maxProfit << endl;
    return 0;
}

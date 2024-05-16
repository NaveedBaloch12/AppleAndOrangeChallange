#include <iostream>
using namespace std;

// User defined functions...
void countAppleandOrange(int s, int t, int a, int b, int apple[], int orange[], int m, int n)
{
    int AppleInHouse = 0, OrangeInHouse = 0;
    for(int i = 0; i < m; i++)
    {
        apple[i] += a;
    }

    for(int i = 0; i < n; i++)
    {
        orange[i] += b;
    }

    for(int i = 0; i < m; i++)
    {
        if(apple[i] >= s && apple[i] <= t)
        {
            AppleInHouse++;
        }

        if(orange[i] >= s && orange[i] <= t)
        {
            OrangeInHouse++;
        }
    }

    cout << AppleInHouse << endl;
    cout <<  OrangeInHouse << endl;
}

int main() // Main function
{
    int s, t, a, b, m, n;

    // get Distance of sam House
    cin >> s;
    cin >> t;

    // get Distance of apple and orange tree
    cin >> a;
    cin >> b;

    // Get number of apple and orange
    cin >> m;
    cin >> n;
    // checking consists given is statement
    if (s < 0 || s > 100000 || t < 0 || t > 100000 || a < 0 || a > 100000 || b < 0 || b > 100 || m < 0 || m > 100000 || n < 0 || n > 100000)
    {
        cout << "Invild Input";
        return 0;
    }
    if (a > s || s > t || t > b)
    {
        cout << "Invild Input";
        return 0;
    }

    int apples[m];
    int oranges[n];

    for (int i = 0; i < m; i++)
    {
        cin >> apples[i];
        if (apples[i] < -100000 || apples[i] > 100000)
            return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> oranges[i];
        if (oranges[i] < -100000 || oranges[i] > 100000)
            return 0;
    }

    // call the function
    countAppleandOrange(s, t, a, b, apples, oranges, m, n);

    return 0;
}
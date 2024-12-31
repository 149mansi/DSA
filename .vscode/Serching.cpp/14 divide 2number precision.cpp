// divide two number of precision value
#include <iostream>
using namespace std;
int solve(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int ans = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) > abs(dividend))
        {
            // left search
            e = mid - 1;
        }
        else
        {
            ans = mid;
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }

    return ans;
}
int main()
{
    int dividend = 22;
    int divisor = 7;
    int ans = solve(dividend, divisor);
    cout << "Ans is" << ans << endl;

    int precision;
    cout << "Enter the number of floating digits in precision " << endl;
    cin >> precision;
    double step = 0.1;
    double finalAns = ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * divisor <= dividend; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "final ans is" << finalAns << endl;
    return 0;
}
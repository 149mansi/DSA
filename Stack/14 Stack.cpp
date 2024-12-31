// Redunat brackets
#include <iostream>
#include <stack>
using namespace std;
bool hasReduanatBrackets(string expression)
{
    stack<char> s;
    // Traverse through the given expression
    for (char ch : expression)
    {
        // if the current charter is a closing bracket
        if (ch == ')')
        {
            char top = s.top();
            s.pop();

            bool isReduandant = true;

            // cheack the contents between '('and ')'
            while (top != '(')
            {
                //    if we find any operator, the brackets are not redundant
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    isReduandant = false;
                }
                top = s.top();
                s.pop();
            }
            // if no operator found, it means reduant bracktes
            if (isReduandant)
            {
                return true;
            }
        }else
            {
                s.push(ch);
            
        }
    }
    return false;
}
int main()
{
    string experession;
    cout << "Enter an experssion:";
    cin >> experession;
    if (hasReduanatBrackets(experession))
    {
        cout << "The expression has redundant barckets" << endl;
    }
    else
    {
        cout << "The expression does not have redundant barckets." << endl;
    }
    return 0;
}


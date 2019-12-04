# include <iostream>
using namespace std;

int main()
{
    char op;
    float S, O;

    cout << "Enter operator either + or - or * or /: "<<endl;
    cin >> op;

    cout << "Enter two operands: "<<endl;
    cin >> S >> O;

    switch(op)
    {
        case '+':
            cout << S+O<<endl;
            break;
        case '-':
            cout << S-O<<endl;
            break;
        case '*':
            cout << S*O<<endl;
            break;
        case '/':
            cout << S/O<<endl;
            break;
        default:

            cout << "Error! operator is not correct"<<endl;
            break;
    }

    return 0;
}

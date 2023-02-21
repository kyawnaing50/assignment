#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    char oper;
    int exit = 0;

    cout << "Welcome to calculator!\n\n";
    cout << "[*] - a * b\n[/] - a / b\n[-] - a - b\n[+] - a + b\n\n";

    do
    {
        cout << "Calculator is now ready to calculate\n\n";
        cin >> a >> oper >> b;

        switch (oper)
        {
        case '+':
            cout << a << " + " << b << " = " << (a + b) << endl;
            cout << "🐢Press 1 to exit\n";
            cin >> exit;
            cout << exit;
            break;

        case '-':
            cout << a << " - " << b << " = " << (a - b) << endl;
            cout << "Press 1 to exit\n";
            cin >> exit;
            cout << exit;
            break;

        case '/':
            cout << a << " / " << b << " = " << (a / b) << endl;
            cout << "🐢Press 1 to exit\n";
            cin >> exit;
            cout << exit;
            break;

        case '*':
            cout << a << " * " << b << " = " << (a * b) << endl;
            cout << "Press 1 to exit\n";
            cin >> exit;
            cout << exit;
            break;

        default:
            // cin >> exit;
            cout << "Press 1 to exit\n";
            exit = 1;
            cout << exit;
            break;
        }
    } while (exit != 1);

    cout << "Thank you for using...Press any key.... \n";

    return 0;
}
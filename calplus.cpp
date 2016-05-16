#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char p;
    
    cin >> a >> b >> p;
    
    switch(p)
    {
        case '+':
            cout << a+b << endl;
        break;
	case '-':
	    cout << a-b << endl;
	break;
	case '*':
	    cout << a*b << endl;
	break;
	case '/':
	if(b!=0)
	    cout << a/b << endl;
 	break;  
    }
    return 0;
}

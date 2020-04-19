#include <iostream>

using namespace std;

int main()
{

    int n,p,x,y,c=0;

    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> x >> y;
        if (x + y >= p)
        {
            c++;
        }
        
    }
    cout << c << endl;

    return 0;
}

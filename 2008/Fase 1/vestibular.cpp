#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int n,rs,i;

    char g2[80]; 
    char r2[80];  
   
    cin >> n;
    cin >> g2;
    cin >> r2;
    
    for ( i = 0; i < n; i++)
    {
        /* code */
        if (g2[i] == 'A' && r2[i] == 'A')
        {
            /* code */
            rs++;
        }else
        if (g2[i] == 'B' && r2[i] == 'B')
        {
            /* code */
            rs++;
        }else
        if (g2[i] == 'C' && r2[i] == 'C')
        {
            /* code */
            rs++;
        }else
        if (g2[i] == 'D' && r2[i] == 'D')
        {
            /* code */
            rs++;
        }else
        if (g2[i] == 'E' && r2[i] == 'E')
        {
            /* code */
            rs++;
        }        
        
    }
    
        
      
    cout << rs << endl;
    

    return 0;
}

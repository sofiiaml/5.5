#include <iostream>
using namespace std; 
double bn(int b1, int q, int n)
{
    if (n == 1)
        return b1;
    else
    return q * bn(b1, q, n - 1);
}

double S(int b1, int q, int n, int &depth, int level) 
{if (level > depth)
            depth = level; 
cout << "level=" << level << endl;
    if (n == 1) {
        return b1;
    }
    else {
        // cout << "S depth=" << depth << endl;
        double t = bn(b1, q, n);
        return t + S(b1, q, n - 1,depth, level+1);
    }
}

int main()
{
    int b1, q, n;
    cout << "b1= "; cin >> b1;
    cout << "q= "; cin >> q;
    cout << "n= "; cin >> n;  
    int depth = 0;
    double t = bn(b1, q, n);
    cout << "bn=" << t << endl;
   
   
    double sum = S(b1, q, n, depth,1);
    cout << "S= " << sum << endl;
 cout << "depth=" << depth << endl;
  
    return 0;
}

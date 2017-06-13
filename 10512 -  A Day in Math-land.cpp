#include <iostream>
#include <cmath>
using namespace std;

bool DoubleIsInt(double num)
{
   double absol = abs(num);
   if ( absol != floor(absol))
       return false;
   else
       return true;
}


int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Case " << i+1 << ":" << endl;
        int A, B;
        cin >> A;
        cin >> B;

        double quadA = 2, quadB =((-1 *A) -(3*B)), quadC = B * B;
        double posu = ((-1*quadB) + sqrt((quadB*quadB)- (4* quadA *quadC)))/ (2 * quadA);
        double negu = ((-1*quadB) - sqrt((quadB*quadB)- (4* quadA *quadC)))/(2 * quadA);
        posu = sqrt(posu);
        negu = sqrt(negu);

        double sol1 = ((posu * posu) - B) / posu;
        double sol2 = ((posu * posu) - B) / (-1* posu);
        double sol3 = ((negu * negu) - B) / negu;
        double sol4 = ((negu * negu) - B) / (-1* negu);

        if (DoubleIsInt(posu))
        {
            if (DoubleIsInt(sol1)){
                cout << posu << " " << sol1 << endl;
                continue;
            }
            else if(DoubleIsInt(sol2)){
                cout << -1 * posu << " " << sol2 << endl;
                continue;
            }
        }

        if (DoubleIsInt(negu))
        {
            if (DoubleIsInt(sol3)){
                cout << negu << " " << sol3 << endl;
                continue;
            }
            else if(DoubleIsInt(sol4)){
                cout << -1 * negu << " " << sol4 << endl;
                continue;
            }
        }
        cout << "Impossible." << endl;
    }
    return 0;
}

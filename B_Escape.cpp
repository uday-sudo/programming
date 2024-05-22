#include <iostream>
using namespace std;

double vp, vd, t, f, c, posp, posd;
int ans;

int main()
{
    cin >> vp >> vd >> t >> f >> c, posp = vp * t;
    if(vp >= vd) cout << 0 << endl;
    else
    {
        while(true)
        {
            double ti = posp / (vd - vp);
            posp += ti * vp;
            if(posp >= c) break;
            posd = ti * vd, ans++;
            posp += (f + ti) * vp;
            if(posp >= c) break;
        }
        cout << ans << endl;
    }
    
    return 0;
}
		 	   	   					   	 	 		  	 	
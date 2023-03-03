#include <iostream>
using namespace std;
int main()
{
    int night,sub,fee,subfee,total;
    cin >> night >> sub >> fee >> subfee;
    total=0;
    if( night < sub ){
        total = night * fee;
    }
    else{
        total = (sub * fee) + ((night-sub) * subfee);
    }
    cout<<total<<endl;
    return 0;
}

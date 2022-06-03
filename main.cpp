#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int ans = 1;
    cin >> n;
    if(n>31)
        cout << "Value of more than 31" << endl;
    else{
        //1¥ª²¾n¦¸
        for(int i=0; i<n; i++){
            ans = ans << 1;
        }
        cout << ans << endl;
    }
    return 0;
}

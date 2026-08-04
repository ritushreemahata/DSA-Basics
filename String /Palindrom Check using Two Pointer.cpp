
//Using two pointer
#include <bits/stdc++.h>
using namespace std;

void palindromCheck(string str){
    int start = 0;
    int end = str.size()-1;
    bool ans = true;
    while (start<=end){
        if (start!=end){
            ans = false;
            break;
        }
        else {
            start++;
            end--;
        }
        
    }
    if (ans){
        cout << "\"" <<str<<"\""<<" is palindrome." <<endl;
    }
    else {
        cout << "\"" <<str<<"\"" <<" is not palindrome." <<endl;
    }
    
}

int main()
{
    string str ;
    cin >>str;
    palindromCheck(str);
    

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void palindromCheck(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    if (rev == str){
        cout << "\"" <<str<<" is Palindrom"<<"\""<<endl;
    }
    else{
        cout <<"\"" <<str <<"\""<< " is not palindrom"  <<endl;
    }
    
}

int main()
{
    string str ;
    cin >>str;
    palindromCheck(str);
    

    return 0;
}

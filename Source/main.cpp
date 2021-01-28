#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string a;

    char e[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int b;
    int c;
    int f;
    int k = 0;
    int l = 0;
    int m;
    int n;
    cout<<" ______________________________________"<<endl;
    cout<<"| Name        : Muhammad Omar Farooq   |"<<endl;
    cout<<"| Roll Number :       20-CP-33         |"<<endl;
    cout<<"|                                      |"<<endl;
    cout<<"| Department of Computer Engineering   |"<<endl;
    cout<<"|           UET Taxila                 |"<<endl;
    cout<<"|______________________________________|\n"<<endl;
    cout<<" >> Enter a number: ";
    cin>>a;
    cout<<" >> Enter the base of the number entered: ";
    cin>>n;

    b = a.length();
    c = b-1;
    int d[c];

    for (int i = 0; i<=c; i++){
        for (int j = 0; j<=26; j++){
            if (a[i] == e[j]){
                d[i] = int(a[i]-55);
                k = 1;
                break;
            }
        }
        if ( k == 0){
            d[i] = a[i]-48;
        }
    }
    m = c;
    for (int i = 0;i<=c;i++){
        l = l + d[i]*pow(n,m);
        m--;
    }
    cout<<" >> "<<a<<" in base 10 : "<<l<<endl;
    return 0;
}

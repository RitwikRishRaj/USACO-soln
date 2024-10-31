#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N , K;
    cin >> N >> K ;
    int lngth = 0;//length tracking
    for (int i = 0; i < N; i++) {
        string sent; 
        cin >> sent;


        //to check new line ffmnt whether it exceeds the criteria 
        // if adding the current word (sent.size()) to the current line length (lngth)
        //if yes, program outputs a newline (cout << '\n';) to start a new line, and resets lngth to zero.
        if (sent.size() + lngth > K) {
            cout << '\n';
            lngth = 0;
        }
        // fr spacing btw words
        if (i != 0 && lngth != 0) {
            cout << ' ';
        }
        
        // print wrd update length
        cout << sent;
        lngth += sent.size();
    }
    //final newline
    cout << '\n';
    
    return 0;
}

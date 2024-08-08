#include<bits/stdc++.h>
using namespace std;
 
void K_Words(string ch, int K){
    int count=0;
    for(int i=0; i<ch.length(); i++){
        if(ch[i]==' ')
        {
            count++;
            if(count >= K){
                break;
            }
        }
        cout<<ch[i];
    }
}

int main()
{
    string ch;
    getline(cin, ch);
    K_Words(ch, 3);
}
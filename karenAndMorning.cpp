// with the name of Allah

#include<bits/stdc++.h>
using namespace std;

bool palindrom(int h, int m){

    return(h/10==m%10 && h%10==m/10);

}

int main(){

    string t;
    cin>>t;

    int h = stoi(t.substr(0,2));
    int m = stoi(t.substr(3,2));

    int ans = 0;

    while(true){
        if(palindrom(h,m)){
            cout<<ans;
            break;
        }
        ans++;
        m++;

        if(m==60){
            m=0;
            h++;
        }
        if(h==24){
            h=0;
        }
    }

    return 0;
}

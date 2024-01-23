#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    vector<int> v,cnt;
    int ans=0;
    rep(i,10){
        int a;cin>>a;
        ans+=a;
        v.push_back(a);
        if(i!=8 && a==10){
            cnt.push_back(v.size());
            cnt.push_back(v.size()+1);
            continue;
        } 
        int b; cin>>b;
        ans+=b;
        v.push_back(b);
        if(a+b==10){
            cnt.push_back(v.size());
        }
        if(i==9 && a+b>=10){
            int c; cin>>c;
            ans+=c;
        }
    }

    rep(i,cnt.size()){
        ans+=v[cnt[i]];
    }
    cout<<ans<<endl;
    return 0;
}

    // Template
    // cout << " You | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|Total" << endl;
    // cout << "-----+---+---+---+---+---+---+---+---+---+---+-----" << endl;
    // cout << "     | X | X | X | X | X | X | X | X | X |XXX| 300 " << endl;
    // cout << "     | 30| 60| 90|120|150|180|210|240|270|300| 300 " << endl;
    //
    // ストライクの時 | X | と表示
    // スペアの時     |9 /| と表示
    // それ以外の時   |7 2| と表示
    // 10フレーム目の |9/X| |9- | |XG-| |G- | と表示
    // 0ピンの時　1投目だったら G 2投目だったら - と表示
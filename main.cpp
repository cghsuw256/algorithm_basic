#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v2(42, 0);
    int cnt = 0;
    for(int i=0; i<10; i++){
        int tmp;
        cin>>tmp;
        v2[tmp%42]++;
    }

    for(int i=0; i<42; i++){
        if(v2[i]=>1){
            cnt++;
        }
    }
    cout<<cnt<<" ";
}

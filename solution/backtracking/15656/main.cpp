#include<bits/stdc++.h>

using namespace std;

int arr[10], choose[10], N, M;

void dfs(int cnt) {
    if(cnt == M) {
        for(int i=0;i<M;i++) {
            cout << arr[choose[i]] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0;i<N;i++) {
        choose[cnt] = i;
        dfs(cnt + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    for(int i=0;i<N;i++) cin >> arr[i];
    sort(arr, arr + N);
    dfs(0);

    return 0;
}

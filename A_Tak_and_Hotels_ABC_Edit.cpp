#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)

lint solveFunction(lint n,lint k,lint x,lint y){
    if(n<=k){
        return n*x;
    }
    else{
        lint firstK = k*x;
        lint rem = (n-k)*y;
        return firstK + rem ;
    }
}
void solution(){
    lint n;lint k;lint x;lint y;
    cin >> n >> k >> x >> y;
    lint ans=solveFunction(n,k,x,y);
    print(ans)

}
int main(){

    solution();
}
#include <bits/stdc++.h>
using namespace std;
map<string,string> m;
map<string,int> name,country;
string num1[100100],num2[100100],ans[100100];
bool cmp(string a,string b) { return a < b; }
int main ()
{
    int n,k,maxx1 = -1,maxx2 = -1,cnt1 = 0,cnt2 = 0;
    cin >> n >> k;
    for (int i = 0 ; i < n ; i ++)
    {
        string s,ss;
        cin >> s >> ss;
        m[s] = ss;
    }
    for (int i = 0 ; i < k ; i ++)
    {
        string s;
        cin >> s;
        ans[i] = s;
        name[s]++;
        country[m[s]]++;
        maxx1 = max(country[m[s]],maxx1);
        maxx2 = max(name[s],maxx2);
    }
    for (int i = 0 ; i < k ; i ++)
    {
        if (country[m[ans[i]]] == maxx1) num1[cnt1 ++] = m[ans[i]];
        if (name[ans[i]] == maxx2) num2[cnt2 ++] = ans[i];
    }
    sort(num1,num1+cnt1,cmp);
    sort(num2,num2+cnt2,cmp);
    cout << num1[0] << endl;
    cout << num2[0];
    return 0;
}
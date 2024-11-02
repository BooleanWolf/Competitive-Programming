#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <queue>
#include <typeinfo>
#include <fstream>
typedef long long ll;
using namespace std;
//freopen("D.in","r",stdin);
//freopen("D.out","w",stdout);
#define sspeed ios_base::sync_with_stdio(0);cin.tie(0)
#define maxn 100001
const int inf=0x7fffffff;   //无限大
struct node
{
    int x;
    int y;
};
node a[maxn];
bool cmp(node c,node b)
{
    return c.x<b.x;
}
int main()
{
    string s;
    cin>>s;
    int flag=0;
    int pos=0;
    int n=s.size();
    int kiss=0;
    for(int i=0;i<n;i++)
    {
        if(s[n-1]>s[i]&&(s[i]-'0')%2==0)
        {
            flag=1;
            swap(s[i],s[n-1]);
            kiss++;
            break;
        }
        if((int)(s[i]-'0')%2==0)
        {
            kiss++;
        }
    }
    if(kiss==0)
        cout<<"-1"<<endl;
    else if(flag==1)
        cout<<s<<endl;
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            if((s[i]-'0')%2==0)
            {
                swap(s[i],s[n-1]);
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
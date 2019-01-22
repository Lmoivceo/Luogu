#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;
long long stn(const string&);
string nts(const long long&);
int main()
{
    ios::sync_with_stdio(0);
    long long k,p;
    cin>>k>>p;
    long long ans=0;
    for(long long i=1;k;i++)
    {
        string s=nts(i);
        string t=s;
        reverse(t.begin(),t.end());
        //if(t[0]=='0')continue;
        s=s+t;
        ans=(ans+stn(s))%p;
        k--;
    }
    cout<<ans<<endl;
}
long long stn(const string&s)
{
    long long rtn;
    stringstream ss;
    ss<<s;
    ss>>rtn;
    return rtn;
}
string nts(const long long&n)
{
    string rtn;
    stringstream ss;
    ss<<n;
    ss>>rtn;
    return rtn;
}

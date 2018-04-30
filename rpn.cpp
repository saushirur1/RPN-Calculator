#include <iostream>
#include <stack>
using namespace std;
class RPN
{
private:
stack<int> st;
int result;
public:
bool ifdigit(const string& s1)
{
char c = s1[0];
if(isdigit(c))
{
return true;
}
return false;
}
void ifoperator(const string& s2)
{
char c1=s2[0];
switch(c1)
{
case '+':
case '-':
case '*':
case '/':
}
}
void place intostack(const sting& s3)
{
int x = stoi(s2);
st.push(x);
}
};
int main()
{
RPN firstobj;
string s="";
bool t=true;
while(t)
{
cout << "Input:" << endl;
cin >> s;
bool x = firstobj.ifidigit(s);
if(bool)
{
firstobj.instostack(s);
}
else
{
firstobj.ifoperator(s);
}
}
}

#include <iostream>
#include <stack>
using namespace std;
class RPN
{
private:
stack<double> st;
double result;
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
double ifoperator(const string& s2)
{
char c1=s2[0];
double right=0;
double left=0;
int flag=0;
switch(c1)
{
case '+':
if(!st.empty())
{
double second=st.top();
st.pop();
double first=st.top();
st.pop();
result=first+second;
}
case '-':
if(!st.empty())
{
double second=st.top();
st.pop();
double first=st.top();
st.pop();
result=first-second;
}
break;
case '*':
if(!st.empty())
{
double second=st.top();
st.pop();
double first=st.top();
st.pop();
result=first*second;
}
break;
case '/':
if(!st.empty())
{
double second=st.top();
st.pop();
double first=st.top();
st.pop();
result=first/second;
}
break;
default:
{
cout << "Enter valid operator" << endl;
flag=1;
break;
}
}
if(flag==0)
{
st.push(result);
}
return result;
}
void doubleostack(const string& s3)
{
double x = stod(s3);
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
bool x = firstobj.ifdigit(s);
if(x)
{
firstobj.doubleostack(s);
}
else
{
double y=firstobj.ifoperator(s);
cout << "result : " << y << endl;
}
}
return 0;
}

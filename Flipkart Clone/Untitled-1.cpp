#include<iostream>
#include<stack>
using namespace std;

int prec(char c)
{
	if(c=='^')
	{
		return 3;
	}
	else if(c=='*'|| c=='/')
	{
		return 2;
	}
	else if(c=='+'||c=='-')
	{
		return 1;
	}
	else
	{
		return -1;
	}
}


string infixtopostfix(string s)
{
	stack<char> st;
	string res;
	
	for(int i=0;i<s.length();i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			res+=s[i];
		}
		else if(s[i] == '(')
		{
			st.push(s[i]);
		}
		else if(s[i]==')')
		{
			while(!st.empty() && st.top()!='(')
			{
				res+=st.top();
				st.pop();
			}
			if(!st.empty())
			{
				st.pop();
			}
		}
		else
		{
			while(!st.empty() && prec(st.top())>prec(s[i]))
			{
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		
	}
		while(!st.empty())
		{
			res+=st.top();
			st.pop();
		}	
		return res;
}

int main()
{
    cout<<"21BCS11275"<<endl;     
    cout<<"Bhashkar kumar"<<endl; 
    string infix, postfix;         
    cout<<"Enter a infix expression:"<<endl;       
    cin>>infix;        
    stack <char> s;  
    cout<<"INFIX EXPRESSION:"<<infix<<endl;  
    cout<<endl<<"POSTFIX EXPRESSION:"<<postfix; 
    infixtopostfix(s);       
     
    return 0;  
}
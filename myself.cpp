#include<iostream>
#include<string>
#define f(s) s+raw(s)+"\");return 0;}"
using namespace std;
string raw(string s)
{
	string ans="";
	char c;
	for(int x=0;x<s.length();x++)
	{
		c=s[x];
		if(c=='\'')ans+="\\\'";
		else if(c=='\"')ans+="\\\"";
		else if(c=='\\')ans+="\\\\";
		else if(c=='\n')ans+="\\n";
		else if(c=='\t')ans+="\\t";
		else ans+=c;
	}
	return ans;
}
int main(){cout<<f("#include<iostream>\n#include<string>\n#define f(s) s+raw(s)+\"\\\");return 0;}\"\nusing namespace std;\nstring raw(string s)\n{\n\tstring ans=\"\";\n\tchar c;\n\tfor(int x=0;x<s.length();x++)\n\t{\n\t\tc=s[x];\n\t\tif(c==\'\\\'\')ans+=\"\\\\\\\'\";\n\t\telse if(c==\'\\\"\')ans+=\"\\\\\\\"\";\n\t\telse if(c==\'\\\\\')ans+=\"\\\\\\\\\";\n\t\telse if(c==\'\\n\')ans+=\"\\\\n\";\n\t\telse if(c==\'\\t\')ans+=\"\\\\t\";\n\t\telse ans+=c;\n\t}\n\treturn ans;\n}\nint main(){cout<<f(\"");return 0;}

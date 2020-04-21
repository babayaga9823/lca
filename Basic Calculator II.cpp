class Solution {
public:
    stack<char>st;
    stack<int>q;
    bool prioritycomp(char a,char b)//stack top input string
    {
        if(a=='+'&&(b=='*'||b=='/'))return true;
        if(a=='-'&&(b=='*'||b=='/'))return true;
        return false;
    }
    int postfix(string s)
        {
            
            for(int i=0;i<s.length();i++)
            {
                
                 if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
                {
                     // cout<<" here if "<<i<<endl;
                    if(st.empty())
                    {
                        st.push(s[i]);
                    }
                    else 
                    {
                        
                        if(prioritycomp(st.top(),s[i]))
                        {
                            st.push(s[i]);
                        }
                        else
                        {
                            while(!st.empty()&&!prioritycomp(st.top(),s[i]))
                            {
                                int a=q.top();
                                q.pop();
                                int b=q.top();
                                q.pop();
                                   if(st.top()=='+')
                                   {
                                       a=a+b;
                                       st.pop();
                                   }
                                    else if(st.top()=='-')
                                   {

                                       a=b-a;
                                        st.pop();
                                   }
                                    else if(st.top()=='*')
                                   {

                                      a=a*b;
                                        st.pop();
                                   }
                                   else if(st.top()=='/')
                                   {

                                       a=b/a;
                                        st.pop();
                                   }
                                // cout<<" ++ "<<a<<endl;
                                q.push(a);
                            }
                            st.push(s[i]);
                        }
                    }
                }
                else if(s[i]>=48&&s[i]<=57)
                {
                    // cout<<" here else if "<<i<<endl;
                    int lop=0,zcvl=0;
                    while(i+lop<s.length()&&s[i+lop]>=48&&s[i+lop]<=57)
                    {
                        // cout<<zcvl*10<<" "<<s[i+lop]-48<<endl;
                        zcvl=zcvl*10+(s[i+lop]-48);
                        lop++;
                    }
                    i=i+lop;
                    i--;
                    // cout<<" int "<<zcvl<<endl;
                    q.push(zcvl);
                }
            }
         while(!st.empty())
        {
                    int a=q.top();
                    q.pop();
                    int b=q.top();
                    q.pop();
                    if(st.top()=='+')
                    {
                         a=a+b;
                        st.pop();
                    }
                                    else if(st.top()=='-')
                                   {

                                       a=b-a;
                                        st.pop();
                                   }
                                    else if(st.top()=='*')
                                   {

                                      a=a*b;
                                        st.pop();
                                   }
                                   else if(st.top()=='/')
                                   {

                                       a=b/a;
                                        st.pop();
                                   }
             // cout<<" ++ "<<a<<endl;
                                q.push(a);
         
        }
       return q.top();
    }
    

    
    
   
    
 int calculate(string s) 
    {
        int z=postfix(s);
     return z;
       
    }
    
    
    
    
    
    
};
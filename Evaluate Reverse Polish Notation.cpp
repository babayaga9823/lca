class Solution {
public:
    stack<char>st;
         stack<int>q;
            bool prioritycomp(char a,char b)//stack top input string
            {
                if(a=='+'&&(b=='*'||b=='/'))return true;
                if(a=='-'&&(b=='*'||b=='/'))return true;
                if(a=='('&&(b=='*'||b=='/'||b=='+'||b=='-'))return true;
                return false;
            }
             void emptycal()
            {
                int a=q.top();
                q.pop();
                int b=q.top();
                q.pop();
                // cout<<" a "<<a<<" b "<<b<<endl;
             if(st.top()=='+')
                {
                a=a+b;                                         
                st.pop();                                        
                q.push(a);                                        
                }
                else if(st.top()=='-')
                {

                a=b-a;                                       
                st.pop();                                        
                q.push(a);                                        
                }
                else if(st.top()=='*')
                {

                a=a*b;                                      
                st.pop();                                        
                q.push(a);                                        
                }
                else if(st.top()=='/')
                {
                a=b/a;                                       
                st.pop();                                        
                q.push(a);                                       
                }

            }
    
    
    int evalRPN(vector<string>& tokens) {
         if(tokens.size()==0)return 0;
        if(tokens[0].size()==0)return 0;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                if(st.empty())
                {
                      st.push(tokens[i][0]);
                }
                else
                {
                    if(prioritycomp(st.top(),tokens[i][0]))
                    {
                        st.push(tokens[i][0]);
                    }
                    else
                        {
                            while(!st.empty()&&!prioritycomp(st.top(),tokens[i][0]))
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
                            st.push(tokens[i][0]);
                        }
                }
            }
            //if ends
                else 
                {
                    // cout<<" here else if "<<i<<endl;
                    int lop=0,zcvl=0,flag=0;
                    if(tokens[i][0]=='-')
                    {
                       lop++; 
                        flag++;
                    }
                    else
                    {
                        lop=0;
                    }
                    while(lop<tokens[i].length()&&tokens[i][lop]>=48&&tokens[i][lop]<=57)
                    {
                        // cout<<zcvl*10<<" "<<s[i+lop]-48<<endl;
                        zcvl=zcvl*10+(tokens[i][lop]-48);
                        lop++;
                    }
                    
                    // cout<<" int "<<zcvl<<endl;
                    if(flag)zcvl=(-1)*zcvl;
                    q.push(zcvl);
                }
             while(!st.empty())
            {
               emptycal();

            }
      
            
        }
        return q.top();
    }
};
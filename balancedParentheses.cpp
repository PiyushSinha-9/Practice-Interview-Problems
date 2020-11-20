
bool ispar(string x)
{
    // Your code here
    
    stack<char> s;
    
    for(char i: x){
        if(i=='{' or i=='(' or i=='['){
            s.push(i);
        }else{
            
            if(i=='}'){
                
                
                if(s.empty()){
                    s.push(i);
                    break;
                }else{
                    if(s.top()=='{'){
                        s.pop();
                        continue;
                    }else{
                        break;
                    }
                }
            
            }
            
             if(i==')'){
                
                
                if(s.empty()){
                    s.push(i);
                    break;
                }else{
                    if(s.top()=='('){
                        s.pop();
                        continue;
                    }else{
                        break;
                    }
                }
            
            }
            
             if(i==']'){
                
                
                if(s.empty()){
                    s.push(i);
                    break;
                }else{
                    if(s.top()=='['){
                        s.pop();
                        continue;
                    }else{
                        break;
                    }
                }
            
            }
            
            
            
        }
    }
    
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}
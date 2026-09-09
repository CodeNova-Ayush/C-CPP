class MinStack 
{
public:
    stack<pair<int, int>> s;

    MinStack() 
    {
        
    }
    
    void push(int value) 
    {
        if (s.empty()) 
        {
            s.push({value, value});
        }
        else 
        {
            int minval = min(value, s.top().second);
            s.push({value, minval});
        }
    }
    void pop() 
    {
        s.pop();
    }
    int top() 
    {
        return s.top().first;
    }
    
    int getMin() 
    {
        return s.top().second;
    }
};
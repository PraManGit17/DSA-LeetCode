class MinStack {

    vector<int> st;
    vector<int> Min_st;

  public:
    MinStack() {    
    }
    
    void push(int value) {
      st.push_back(value);

      if(Min_st.empty())
      {
        Min_st.push_back(value);
      }
      else{
        Min_st.push_back(min(value, Min_st.back()));
      }
    }
    
    void pop() {
     st.pop_back();
     Min_st.pop_back();   
    }
    
    int top() {
     return st.back();   
    }
    
    int getMin() {
     return Min_st.back();   
    }
};
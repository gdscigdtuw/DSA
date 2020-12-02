class Validate_Stack{
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stack;
        int i = 0;
        for (int x : pushed) {
            stack.push(x);
            while (stack.size() && stack.top() == popped[i]) {
                stack.pop();
                i++;
            }
        }
        if (stack.size() == 0) return true;
	else return false;
    
    }
};

/*
TIME COMPLEXITY: 0(N) where n is size of string
SPACE COMPLEXITY:0(N) where n is size of string
TEST CASE

INPUT
[1,2,3,4,5]
[4,5,3,2,1]

OUTPUT 
true

*/


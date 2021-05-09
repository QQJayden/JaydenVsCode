// Define basic data struct of stack and queue
// 代替std代码库

#include <stack>

//class stack
//{
//
//};*/

/*设计一个有getMin功能的栈*/
class getMinSolution
{
public:
	int getMin();

private:
	std::stack<int> data_stack;
	std::stack<int> min_stack;

};

void getMinTest();


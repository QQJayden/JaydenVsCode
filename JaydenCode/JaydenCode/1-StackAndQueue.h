// Define basic data struct of stack and queue
// ����std�����

#include <stack>

//class stack
//{
//
//};*/

/*���һ����getMin���ܵ�ջ*/
class getMinSolution
{
public:
	int getMin();

private:
	std::stack<int> data_stack;
	std::stack<int> min_stack;

};

void getMinTest();


#include<iostream>
#include<cstdlib>
#include<ctime>
class expression{
	public:
	  int a;
	  int b;
	  int answer;
	  char op;
	  expression() {}
	  expression(int a, char op, int b, int answer)
	  {
		  this->a = a;
		  this->op = op;
		  this->b = b;
		  this->answer = answer;
	  }
	  void CreatingExpression();
	  void ValidatingUserAnswer();
};
int right_answer = 0;
int main(){
	int i = 0;
	expression exp;
	while (i < 10){
		exp.CreatingExpression();
		exp.ValidatingUserAnswer();
		i++;
	}
	std::cout << "You got " << right_answer * 10 << " scores" << std::endl;
	std::cout << "You did " << 10 - right_answer << " mistakes" << std::endl;
	return 0;
}
void expression::CreatingExpression(){
	int int_op = 0;
	const int LARGEST = 10;
	char op;
	srand((unsigned)time(NULL));
	int_op = rand() % 4;
	int a = rand() % LARGEST + 1;
	int b = rand() % LARGEST + 1;
	int answer = 0;
	switch(int_op){
		case 0:
			op = '+';
			answer = a + b;
			break;
		case 1:
			op = '-';
			answer = a - b;
			if (answer < 0){
				int temp;
				temp = a;
				a = b;
				b = temp;
				answer = -answer;
			}
			break;
		case 2:
			op = '*';
			answer = a * b;
			break;
		case 3:
			op = '/';
			while (a % b != 0)
			{
				a = rand() % LARGEST + 1;
				b = rand() % LARGEST + 1;
			}
			answer = a / b;
			break;
	}
	this->a = a;
	this->b = b;
	this->op = op;
	this->answer = answer;
}

void expression::ValidatingUserAnswer(){
	int answer;
	std::cout << a << op << b << "=";
	std::cin >> answer;
	if (answer == this->answer){
		right_answer++;
		std::cout << "Right!" << std::endl;
	}
	else
		std::cout << "Not correct!" << std::endl;
}

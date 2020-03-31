//Gladys Roman
//number.h

#ifndef NUMBER_H
#define NUMBER_H
class Number
{
	public:
		Number();
		Number(int n);
		void setValue(int n);
		int getValue();
		bool isPrime();
		bool isLucky();

	private:
		int num;
};

#endif

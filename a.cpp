#include <iostream>

int main()
{
	int lines;
	std::cout << "本程序用来现实一个指定行数的菱形" << std::endl
		  <<"请输入想要显示的行数:";
	std::cin >> lines;

	//处理输入，使其符合要求
	if(lines < 1)	//判断输入是否大于 0
	{
		std::cerr << "请输入大于等于 1 的行数" << std::endl;
		return 1;
	}
	lines += lines % 2 - 1;	//将输入转化为奇数

	//debug 语句
	//std::cout << lines << std::endl;
	
	/* 输出菱形
	 * 设置外层循环控制行数
	 * 内层第一个循环控制空格的个数
	 * 内层第二个循环控制 '*' 的个数
	 * 逆序执行内层的两个循环
	 * 只用两个变量控制循环：成功
	 */
	int tmp = 0;
	for (int i=0; i<lines+1; i++)
	{
		int j, k;
		if(i < lines/2) //输出上半部分
		{
			for(j=0; j<(lines/2 - i); j ++) //空格
				std::cout << ' ';

			for(k=0; k<(2*i+1); k ++) //输出奇数个'*'
				std::cout << "+";
		}
		if(i >= lines/2)		//输出下半部分
		{
		      for(k=0; k<tmp; k++) //空格的数量是自然数列
		      	std::cout << ' ';

		      for(j=0; j<2*(lines-i)-1; j ++) //输出奇数个'*'
		      	std::cout << '+';

		      tmp ++;
		}
		std::cout << std::endl;
	}
	return 0;
}

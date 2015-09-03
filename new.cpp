/*
 * 除了开头
 * 注释掉的地方
 * 都是錯误的
 */

#include <iostream>
#include "new.h"

int main()
{
	int i = 1;
	const int j = 2;	//int 常量类型

	int *const p = &i;	//(顶层 const) 只读类型指針，可以指向任意类型的 int 类型
	//int *const p1 = &j;	//(顶层 const) 指針本身只读，但不限定指向的內容只读
	const int *const p1 = &j;	//(底层 const) 限定指向的內容不可更改

	const int &r1 = i;
	//int &r2 = r1;

	int &r = i;
	//int &r1 = j;
	
	return 0;
}

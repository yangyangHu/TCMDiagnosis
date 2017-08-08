/**********************************************************************************
*
*					    数值与字符串间的相互转换
*					   by Hu yangyang 2016/1/22
*
***********************************************************************************/
#ifndef TYPECONVERT_H
#define TYPECONVERT_H

#include "Global.h"
//数值转化为字符串
template<class T>
string toString(const T& value)
{
	stringstream ss;
	string str;
	ss<<value;
	ss>>str;
	return str;
}

//字符串转化为数值
template<class T>
T fromString(const string& str)
{
	stringstream ss;
	T value;
	ss<<str;
	ss>>value;
	return value;
}

#endif

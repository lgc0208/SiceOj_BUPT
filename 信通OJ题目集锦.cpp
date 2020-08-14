//从键盘输入三个变量，分别是今天的年、月、日的数值，按格式输出今天的日期。
//例如，输入2017  3  1，输出2017年3月1日
//#include<iostream>
//using namespace std;
//int main()
//{
//	int y, m, d;
//	cin >> y >> m >> d;
//	cout << y << "年" << m << "月" << d << "日" << endl;
//	return 0;
//}

//从键盘输入一个大写字母，将它转换成小写字母输出到屏幕。
//#include<iostream>
//using namespace std;
//int main()
//{
//	char a, b;
//	cin >> a;
//	b = a + 32;
//	cout << b << endl;
//	return 0;
//}

//设计一个程序，完成数据的逆序输出。从键盘输入一个三位整数，请将其逆序输出。如输入123，输出321。
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char a[3];
//	cin >> a;
//	for (int k = 2; k >= 0; k--)
//	{
//		cout << a[k];
//	}
//	return 0;
//}

//请编写程序将固定的IP地址10.3.8.211转换成二进制，以十六进制格式输出，格式如下：10.3.8.211对应的二进制格式IP地址为：xxxxxxxx，其中x代表计算出的数值。
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	typedef unsigned long int u_long;
//	u_long b1, b2, b3, b4;
//	char ch;
//	u_long l_addr = 0;
//	b1 = 10; b2 = 3; b3 = 8; b4 = 211;
//	l_addr = l_addr | b1;
//	l_addr = (l_addr << 8) | b2;
//	l_addr = (l_addr << 8) | b3;
//	l_addr = (l_addr << 8) | b4;
//	/*位运算知识：
//	&	与	两个位都为1时，结果才为1
//	|   或	两个位都为0时，结果才为0
//	^  异或	两个位相同为0，相异为1
//	~  取反	0变1，1变0
//	<< 左移	各二进位全部左移若干位，高位丢弃，低位补0
//	>> 右移	各二进位全部右移若干位，对无符号数，高位补0，有符号数，各编译器处理方法不一样，有的补符号位（算术右移），有的补0（逻辑右移）*/
//	cout << "10.3.8.211对应的二进制格式IP地址为：" << hex << l_addr << endl;
//	return 0;
//}

//任意输入一个4位数整数年份，判断是否闰年。闰年规则：非整百年能被4整除为闰年，2004是，2100不是；整百年能被400整除为闰年，2000是，1900不是。
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int y;
//	cin >> y;
//	if (y % 100 != 0)
//	{
//		if (y % 4 == 0)
//			cout << "是" << endl;
//		else cout << "不是" << endl;
//	}
//	else
//		if (y % 400 == 0)
//			cout << "是" << endl;
//		else
//			cout << "不是" << endl;
//	return 0;
//}

//编写三个函数，分别完成如下任务：
//函数一，计算整数a除以整数b的商的整数部分；
//函数二，计算整数a除以整数b的余数；
//函数三，用函数一和函数二完成分离整数各位的功能，对于输入的1～32767之间的整数，打印出一列数字，每个数字间空一个格。例如，输入：4562  输出：4 5 6 2
//#include <iostream>
//using namespace std;
//
//int fun1(int a, int b)
//{
//	return a / b;
//}
//
//int fun2(int a, int b)
//{
//	return a % b;
//}
//
//int fun3(int x)
//{
//	int n, m = 1;
//	for (n = x; n > 9; n /= 10)  //m 用来计算位数
//		m *= 10;
//	for (; m > 0; m /= 10)
//	{
//		if (m != 1)
//			cout << fun2(fun1(x, m), 10) << " ";
//		else
//			cout << fun2(fun1(x, m), 10);
//	}
//	return 0;
//}
//
//int main()
//{
//	int x;
//	cin >> x;
//	fun3(x);
//	return 0;
//}

//编写函数，把华氏温度F（double型）转换为摄氏温度C（double型），公式为C = (F - 32) / 1.8。键盘输入一个华氏温度，可以得到相应的摄氏温度。
//#include<iostream>
//using namespace std;
//double F, C;
//
//int Change(double F) {
//	double C;
//	C = (F - 32) / 1.8;
//	cout << C;
//	return 0;
//}
//
//int main()
//{
//	cin >> F;
//	Change(F);
//	return 0;
//}

//歌手大奖赛共有10位评委，为每位选手打分（double型）。预赛部分歌手的分数，为去掉1个最高分、1个最低分后其余8个分数的平均值；
//决赛部分歌手的分数，为去掉2个最高分、2个最低分后其余6个分数的平均值。通过键盘输入10位评委的打分，以及当前处于哪个阶段（预赛
//部分用1表示，决赛部分用2表示）。主函数中，只负责输入数据、调用分数计算函数、输出结果，评分计算部分编写独立函数完成。
//#include <iostream>
//using namespace std;
//
//double PaiXu(double a[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = i + 1; j < 10; j++)
//		{
//			if (a[i] > a[j])
//			{
//				double temp;
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	return 0;
//}
//
//double  YuSai(double a[10])
//{
//	double sum = 0;
//	PaiXu(a);
//	for (int i = 1; i < 9; i++)
//		sum += a[i];
//	return sum / 8.0;
//}
//
//double JueSai(double a[10])
//{
//	double sum = 0;
//	PaiXu(a);
//	for (int i = 2; i < 8; i++)
//		sum += a[i];
//	return sum / 6.0;
//}
//
//int main()
//{
//	double a[10];
//	int n;
//	for (int i = 0; i < 10; i++)
//		cin >> a[i];
//	cin >> n;
//	if (n == 1)
//		cout << YuSai(a);
//	else
//		cout << JueSai(a);
//
//	return 0;
//}

//编写程序计算排列，排列的公式P(n, m) = n!/ (n - m)!，其中n >= m。请使用两个函数分别实现计算阶乘和计算排列。键盘输入n和m的值，输出它们的排列值。
//#include <iostream>
//using namespace std;
//
//int JieCheng(int n) {
//	int Re = 1;
//	for (int i = 1; i < n + 1; i++)
//		Re *= i;
//	return Re;
//}
//
//int JiSuan(int n, int m) {
//	int Result;
//	Result = JieCheng(n) / JieCheng(n - m);
//	return Result;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	cout << JiSuan(n, m);
//	return 0;
//}

//有10个小朋友围成一圈分糖果，老师顺次分给每人一定数量糖果（初始值为偶数）然后按照下列规则调整，
//所有小朋友同时把自己的糖果分一半给右边的人，糖果数变为奇数的人，向老师补要一块糖果，问经过多少
//次调整后，大家糖果数一样多，且每人多少块。建立两个函数，一个负责传递糖果，一个负责判断所有人的
//糖果是否相等。
//#include <iostream>
//using namespace std;
//int a[10];
//
//int Pass()
//{
//	int temp = a[9];
//	for (int i = 9; i > 0; i--)
//	{
//		a[i] = a[i] / 2 + a[i - 1] / 2;
//
//	}
//	a[0] = a[0] / 2 + temp / 2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (a[i] % 2 != 0)
//			a[i]++;
//	}
//	return 0;
//}
//
//int judge()
//{
//	int sum = 0, n = 0;
//	while (true)
//	{
//		for (int i = 0; i < 10; i++)
//			sum += a[0] - a[i];
//		if (sum == 0)
//		{
//			cout << n << " " << a[0] << endl;
//
//			return 0;
//		}
//		Pass();
//		n++;
//		sum = 0;
//	}
//}
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//		cin >> a[i];
//	judge();
//	return 0;
//}

//用非递归函数，求Fibonacci数列第n项。键盘输入一个n，输出Fibonacci数列第n项的值。
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int Fibonacc(int n) {
//	int End = 0, a = 1, b = 1;
//	if (n == 1 || n == 2) End = 1;
//	else for (int i = 2; i < n; i++)
//	{
//		End = a + b;
//		a = b;
//		b = End;
//	}
//	return End;
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << Fibonacc(n) << endl;
//	return 0;
//}

//编写相应的程序用指针实现：从键盘输入3个整型数va、vb、vc，通过一个指向整型的指针iptr，输出3个数中的最大值。
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int* p = 0;
//	int va, vb, vc;
//	cin >> va >> vb >> vc;
//	if (va > vb)
//	{
//		if (va > vc) p = &va;
//		else  p = &vc;
//	}
//	else {
//		if (vc > vb) p = &vc;
//		else p = &vb;
//	}
//	cout << *p;
//	return 0;
//}

//编写一个函数get_average()获取整型数组元素的平均值。要求这个函数既可以用来求一维数组元素的平均值，也可以求二维数组
//元素的平均值。在main()函数中通过具体的一维数组Array_1D和二维数组Array_2D测试这个函数。假定一维数组为a[5], 二维数组为
//b[2][3], 一维数组和二维数组的变量值由键盘分别输入，在屏幕上输出一维数组和二维数组的平均值，平均值间用一个空格分开。
//#include<iostream>
//using namespace std;
//double get_average(int* p, int size) {
//	int sum = 0;
//	double average;
//	for (int i = 0; i < size; i++)
//	{
//		sum += *(p + i);
//	}
//	average = (double)sum / size;
//	return average;
//}
//
//int main()
//{
//	int a[5] = { 0 };
//	int b[2][3] = { 0 };
//	for (int i = 0; i < 5; i++) cin >> a[i];
//
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++)
//			cin >> b[i][j];
//	}
//	cout << get_average(a, 5) << " " << get_average(*b, 6);
//	return 0;
//}

//请编写函数实现将一个数值插入到数组中适当的位置，使新数组按降序排列，并将插入的位置输出到屏幕上。 说明：1）原数组大小和数值由键盘输入，动态创建数组； 2）插入的数值由键盘输入。
//
//3)如果插入数据与原数组中某数据相同，则插在该数据之前。
//#include<iostream>
//using namespace std;
//
//int a[100] = { 0 };
//
//void insert(int a[], int n)
//{
//	int i, j, temp;
//	for (i = 0; i < n + 1; i++) {
//		for (j = 0; j < n + 1; j++)
//		{
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i, n, in;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	cin >> in;
//	a[n] = in;
//	insert(a, n);
//	for (i = 0; i <= n + 1; i++)
//	{
//		if (a[i] == in) {
//			cout << i + 1 << endl;
//			break;
//		}
//	}
//	return 0;
//}

//将两个数组a和b合并，合并后的数组按升序输出。 说明：1）数组a和b的大小和元素的值从键盘输入；先输入数组大小，再输入数组的值； 2）合并后的数组输出时，各数值间以空格分开。
//#include<iostream>
//using namespace std;
//
//int a[100] = { 0 };
//int b[100] = { 0 };
//int c[100] = { 0 };
//
//void Compare(int a[], int n)
//{
//	int i, j, temp;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++)
//		{
//			if (a[i] < a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i, n, m;
//
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	cin >> m;
//	for (i = 0; i < m; i++)
//	{
//		cin >> b[i];
//	}
//
//	for (i = 0; i < n; i++) c[i] = a[i];
//
//	for (i = n; i < n + m; i++) c[i] = b[i - n];
//
//	Compare(c, n + m);
//	for (i = 0; i < n + m; i++)
//	{
//		cout << c[i] << " ";
//	}
//	return 0;
//
//}

//已知有3名学生及五门课程的成绩，要求根据学生的各科平均分排序（降序）, 并输出学生的所有信息和平均分（用指针数组完成）。
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//struct STU
//{
//	char name[20];
//	int m1;
//	int m2;
//	int m3;
//	int m4;
//	int m5;
//};
//
//
//float Average(int a, int b, int c, int d, int e)
//{
//	float sum, an;
//	sum = a + b + c + d + e;
//	an = sum / 5;
//	return an;
//}
//
//
//int main()
//{
//	int i, n, m;
//	STU s1, s2, s3;
//	cin >> s1.name >> s1.m1 >> s1.m2 >> s1.m3 >> s1.m4 >> s1.m5;
//	cin >> s2.name >> s2.m1 >> s2.m2 >> s2.m3 >> s2.m4 >> s2.m5;
//	cin >> s3.name >> s3.m1 >> s3.m2 >> s3.m3 >> s3.m4 >> s3.m5;
//
//	float a1, a2, a3;
//	a1 = Average(s1.m1, s1.m2, s1.m3, s1.m4, s1.m5);
//	a2 = Average(s2.m1, s2.m2, s2.m3, s2.m4, s2.m5);
//	a3 = Average(s3.m1, s3.m2, s3.m3, s3.m4, s3.m5);
//
//	if (a1 > a2&& a2 > a3)
//	{
//		cout << s1.name << " " << s1.m1 << " " << s1.m2 << " " << s1.m3 << " " << s1.m4 << " " << s1.m5 << " " << a1 << endl;
//		cout << s2.name << " " << s2.m1 << " " << s2.m2 << " " << s2.m3 << " " << s2.m4 << " " << s2.m5 << " " << a2 << endl;
//		cout << s3.name << " " << s3.m1 << " " << s3.m2 << " " << s3.m3 << " " << s3.m4 << " " << s3.m5 << " " << a3 << endl;
//	}
//
//	else if (a2 > a1&& a1 > a3)
//	{
//		cout << s2.name << " " << s2.m1 << " " << s2.m2 << " " << s2.m3 << " " << s2.m4 << " " << s2.m5 << " " << a2 << endl;
//		cout << s1.name << " " << s1.m1 << " " << s1.m2 << " " << s1.m3 << " " << s1.m4 << " " << s1.m5 << " " << a1 << endl;
//		cout << s3.name << " " << s3.m1 << " " << s3.m2 << " " << s3.m3 << " " << s3.m4 << " " << s3.m5 << " " << a3 << endl;
//	}
//
//	else if (a1 > a3&& a3 > a2)
//	{
//		cout << s1.name << " " << s1.m1 << " " << s1.m2 << " " << s1.m3 << " " << s1.m4 << " " << s1.m5 << " " << a1 << endl;
//		cout << s3.name << " " << s3.m1 << " " << s3.m2 << " " << s3.m3 << " " << s3.m4 << " " << s3.m5 << " " << a3 << endl;
//		cout << s2.name << " " << s2.m1 << " " << s2.m2 << " " << s2.m3 << " " << s2.m4 << " " << s2.m5 << " " << a2 << endl;
//	}
//
//	else if (a3 > a1&& a1 > a2)
//	{
//		cout << s3.name << " " << s3.m1 << " " << s3.m2 << " " << s3.m3 << " " << s3.m4 << " " << s3.m5 << " " << a3 << endl;
//		cout << s1.name << " " << s1.m1 << " " << s1.m2 << " " << s1.m3 << " " << s1.m4 << " " << s1.m5 << " " << a1 << endl;
//		cout << s2.name << " " << s2.m1 << " " << s2.m2 << " " << s2.m3 << " " << s2.m4 << " " << s2.m5 << " " << a2 << endl;
//	}
//
//	else if (a3 > a2&& a2 > a1)
//	{
//		cout << s3.name << " " << s3.m1 << " " << s3.m2 << " " << s3.m3 << " " << s3.m4 << " " << s3.m5 << " " << a3 << endl;
//		cout << s2.name << " " << s2.m1 << " " << s2.m2 << " " << s2.m3 << " " << s2.m4 << " " << s2.m5 << " " << a2 << endl;
//		cout << s1.name << " " << s1.m1 << " " << s1.m2 << " " << s1.m3 << " " << s1.m4 << " " << s1.m5 << " " << a1 << endl;
//	}
//
//	else if (a2 > a3&& a3 > a1)
//	{
//		cout << s2.name << " " << s2.m1 << " " << s2.m2 << " " << s2.m3 << " " << s2.m4 << " " << s2.m5 << " " << a2 << endl;
//		cout << s3.name << " " << s3.m1 << " " << s3.m2 << " " << s3.m3 << " " << s3.m4 << " " << s3.m5 << " " << a3 << endl;
//		cout << s1.name << " " << s1.m1 << " " << s1.m2 << " " << s1.m3 << " " << s1.m4 << " " << s1.m5 << " " << a1 << endl;
//	}
//
//	return 0;
//
//}

//用字符指针数组，将给定的5个字符串（可以是任意5个国家名字）进行排序并输出。
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void sort(char** p)
//{
//	int i, j;
//	char* temp;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (strcmp(*(p + i), *(p + j)) > 0)
//			{
//				temp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = temp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int i;
//	char** p, * pstr[5], str[5][20];
//	for (i = 0; i < 5; i++)
//		pstr[i] = str[i];
//	for (i = 0; i < 5; i++)
//		cin >> pstr[i];
//	p = pstr;
//	sort(p);
//	for (i = 0; i < 5; i++) cout << pstr[i] << endl;
//	return 0;
//}

//编制程序，调用指针作为参数的函数，实现下面两字符串变量的交换。 char* ap = "hello"; char* bp = "how are you"; 交换的结果为：ap 指向"how are you"，bp 指向"hello"。(注意：输出语句中的; 和.为英文符号)
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	char* ap = "hello";
//	char* bp = "how are you";
//	char* temp;
//	temp = ap;
//	ap = bp;
//	bp = temp;
//	cout << "ap指向" << ap << ";"  << "bp指向" << bp << "." << endl;
//	return 0;
//}

//动态申请一个一维整型数组，要求用户从键盘输入元素个数，采用new运算符分配空间，从键盘输入数组变
//量的值.写一个函数void Func(int* A, int nSize)，使A把0移至后面, 非0整数移至数组前面并保持有序(升序)。
//将排序后的数组变量的值输出到屏幕上，各数值间用一个空格隔开。
//#include<iostream>
//using namespace std;
//int findPos(int val, int size, int* a)
//{
//	if (val == 0) val = 1e9 + 7;
//	for (int i = 0; i < size; i++)
//		if (val > a[i]) continue;
//		else
//		{
//			for (int j = size; j > i; j--)
//				a[j] = a[j - 1];
//			a[i] = val;
//			return i + 1;
//		}
//	return size + 1;
//}
//int main()
//{
//	int* a, n, tmp, size = 0;
//	cin >> n;
//	a = new int[n + 1];
//	for (int i = 0; i < n + 1; i++) a[i] = 1e9 + 10;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> tmp;
//		size++;
//		findPos(tmp, size, a);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == 1e9 + 7) a[i] = 0;
//		cout << a[i];
//		if (i != n - 1) cout << ' ';
//	}
//	delete[] a;
//	return 0;
//}

//定义一个矩形类，长和宽是它的属性，可以求出矩形的面积。定义一个比较函数，比较两个矩形的
//面积，把面积大的矩形对象作为引用来返回。主函数中定义两个矩形，它们的长、宽已知，分别为
//矩形1：长5.2、宽4.3，矩形2：长100、宽20。再由键盘输入一个矩形的长、宽。调用比较函数进行
//比较，找出面积大的矩形，输出其面积。
//输入：10 8
//输出：2000
//#include<iostream>
//using namespace std;
//
//class rectangle
//{
//public:
//	void Set(double _length, double _width);
//	double square();
//private:
//	double length;
//	double width;
//};
//
//void rectangle::Set(double _length, double _width)
//{
//	length = _length;
//	width = _width;
//}
//
//double rectangle::square()
//{
//	return length * width;
//}
//
//double Compare(rectangle c1, rectangle c2, rectangle c3)
//{
//	double temp;
//	c1.square() > c2.square() ? temp = c1.square() : temp = c2.square();
//	if (c3.square() > temp) return c3.square();
//	else return temp;
//}
//
//int main()
//{
//	rectangle c1, c2, c3;
//	c1.Set(5.2, 4.3);
//	c2.Set(100, 20);
//	double Nlength, Nwidth;
//	cin >> Nlength >> Nwidth;
//	c3.Set(Nlength, Nwidth);
//	cout << Compare(c1, c2, c3) << endl;
//	return 0;
//}

//定义一个时间类，数据成员包括年、月、日，它的函数成员分别可以设置时间、显示时间，其中显示
//时间的函数，使用重载函数定义，遇到整型数值，则返回2017 - 5 - 30的格式，遇到浮点型数值，则输出
//2017年5月30日的格式。
//输入：2017 5 30 1.1
//输出：2017年5月30日

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Time
//{
//public:
//	void SetTime(int a, int b, int c);
//	void ShowTime(int a);
//	void ShowTime(double a);
//	int year;
//	int month;
//	int day;
//};
//
//void Time::SetTime(int a, int b, int c)
//{
//	year = a;
//	month = b;
//	day = c;
//}
//
//void Time::ShowTime(int a)
//{
//	cout << year << "-" << month << "-" << day << endl;
//}
//void Time::ShowTime(double a)
//{
//	cout << year << "年" << month << "月" << day << "日" << endl;
//}
//
//int main()
//{
//	Time Now;
//	int a, b, c;
//	string d;
//	string::size_type idx;
//	cin >> a >> b >> c >> d;
//	Now.SetTime(a, b, c);
//	idx = d.find(".");
//	if (idx == string::npos)
//		Now.ShowTime(1);
//	else Now.ShowTime(0.1);
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
class Time
{
public:
	int year;
	int month;
	int day;
	void ShowTime(int a) { cout << year << "-" << month << "-" << day<<endl; }
	void ShowTime(double a) { cout << year << "年" << month << "月" << day << "日" << endl; }
};
int main()
{
	Time t;
	string s;
	int i;
	cin >> t.year >> t.month >> t.day;
	cin >> s;
	for (i = 0; s[i]; i++)
		if (s[i] == '.') break;
			if(!s[i]) t.ShowTime(1);
		else t.ShowTime(1.0);
	
	return 0;
}
//定义一个Triangle三角形类，包括数据成员三边边长(int类型)、判断三角形形状的成员函数。键盘输入三角形三边边长，判断此三角形形状（其中，等腰直角三角形归为等腰三角形类）。
//构成等边三角形，输出“A equileteral triangle”；
//构成等腰三角形，输出“A isosceles triangle”；
//构成直角三角形，输出“A right triangle”；
//构成三角形，但不是以上三种，则输出“A triangle”；
//不构成，输出“Not a triangle”。
//输入：3 4 5
//输出：A right triangle
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if ((a + b <= c || a + c <= b || b + c <= a) || (a - b >= c || a - c >= b || b - c >= a || b - a >= c || c - a >= b || c - b >= a)) cout << "Not a triangle" << endl;
//	else {
//		if (a <= 0 || b <= 0 || c <= 0) cout << "Not a triangle" << endl;
//		else if (a == b && a == c) cout << "A equileteral triangle" << endl;
//		else if ((a == b) || (a == c) || (b == c)) cout << "A isosceles triangle" << endl;
//		else if ((c * c == a * a + b * b || b * b == a * a + c * c || a * a == b * b + c * c) && (a != b && b != c && c != a)) cout << "A right triangle" << endl;
//		else cout << "A triangle" << endl;
//	}
//	return 0;
//}

//设计雇员Employee类，包含雇员的情况，工号、姓名、工资等级（每月工资数，整型数值）、受雇时间（年、月、日）。编写程序测试Employee类。要求输入任意员工工号，及当前日
//期（年、月，此日期应晚于受雇时间），输出该员工姓名接应得到的工资总额，中间用空格隔开。
//已知当前所有员工信息如下：
//1, "wang", 5000, 2000, 10, 23
//2, "liu", 4500, 2008, 1, 20
//3, "huo", 3800, 2003, 7, 3
//4, "ma", 5300, 2015, 4, 10
//5, "meng", 6000, 2016, 3, 16
//输入：5 2016 5
//输出：meng 12000
//#include<iostream>
//#include<string>
//using namespace std;
//class Employee
//{
//	int wage, SYear, SMonth, SDay;
//	string name;
//public:
//	void SetData(string n, int w, int Y, int M, int D)
//	{
//		name = n;
//		wage = w;
//		SYear = Y;
//		SMonth = M;
//		SDay = D;
//	}
//	void ShowSituation(int Y, int M)
//	{
//		int shouldGet = ((Y - SYear) * 12 + (M - SMonth)) * wage;
//		cout << name << ' ' << shouldGet << endl;
//	}
//}Em[6];
//int main()
//{
//	Em[1].SetData("wang", 5000, 2000, 10, 23);
//	Em[2].SetData("liu", 4500, 2008, 1, 20);
//	Em[3].SetData("huo", 3800, 2003, 7, 3);
//	Em[4].SetData("ma", 5300, 2015, 4, 10);
//	Em[5].SetData("meng", 6000, 2016, 3, 16);
//	int n, Y, M;
//	cin >> n >> Y >> M;
//	Em[n].ShowSituation(Y, M);
//	return 0;
//}
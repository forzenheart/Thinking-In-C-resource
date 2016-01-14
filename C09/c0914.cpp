//暂时还没有弄清楚作者的意图
//编译和运行没有错误
class A {
	public:
	A()
	{
		//class A;
	}
};

class B {
	A	m_a;
	public:
	B()
	{}
};

int main(void)
{
	B	b[10];
	return 0;
}

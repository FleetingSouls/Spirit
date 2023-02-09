#include<Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

// 返回创建的应用程序
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
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

// ���ش�����Ӧ�ó���
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
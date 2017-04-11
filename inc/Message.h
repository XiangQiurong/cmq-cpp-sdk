#ifndef CMQ_SDK_INCLUDE_MESSAGE_H_
#define CMQ_SDK_INCLUDE_MESSAGE_H_

#include"stdint.h"
#include<string>
#include<vector>
using std::vector;
using std::string;

namespace cmq
{
	class Message
	{
	public:
		Message();

		~Message();

		//���������ص���ϢID
		string msgId;
		//ÿ������Ψһ����Ϣ���������ɾ���Ȳ���
		string receiptHandle;
		//��Ϣ��ǩ��������Ϣ���ˣ�
		vector<string> msgTag;
		//��Ϣ��
		string msgBody;
		//��Ϣ���͵����е�ʱ�䣬�� 1970��1��1�� 00:00:00 000 ��ʼ�ĺ�����
		uint64_t enqueueTime;
		//��Ϣ�´οɼ���ʱ�䣬�� 1970��1��1�� 00:00:00 000 ��ʼ�ĺ�����
		uint64_t nextVisibleTime;
		//��Ϣ��һ�γ����е�ʱ�䣬�� 1970��1��1�� 00:00:00 000 ��ʼ�ĺ�����
		uint64_t firstDequeueTime;
		//�����д���
		int dequeueCount;

	};
}
#endif

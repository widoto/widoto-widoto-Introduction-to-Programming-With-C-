#include <iostream>
using namespace std;

class TV
{
public:
	int channel;
	int volumeLevel;
	bool on;

	TV()
	{
		channel = 1;
		volumeLevel = 1;
		on = false;
	}

	//������ �߰�
	TV(int newChannel, int newVolumeLevel)
	{
		channel = newChannel;
		volumeLevel = newVolumeLevel;
		on = true;
	}
	//TV�� Ų��.
	void turnOn()
	{
		on = true;
	}
	//TV�� ����.
	void turnOff()
	{
		on = false;
	}
	//ä���� �����Ѵ�.
	void setChannel(int newChannel)
	{
		if (on&&newChannel >= 1 && newChannel <= 120)
			channel = newChannel;
	}
	//������ �����Ѵ�.
	void setVolume(int newVolumeLevel)
	{
		if (on&&newVolumeLevel >= 1 && newVolumeLevel <= 7)
			volumeLevel = newVolumeLevel;
	}
	//ä���� ��ĭ�� �ø���.
	void channelUp()
	{
		if (on&& channel < 120)
			channel++;
	}

	//ä�ΰ��� ��ĭ ���� �����Ű�� �Լ�
	void channelUpBy2()
	{
		if (on&& channel <= 118) //channel+2<=120�̹Ƿ�
			channel += 2;
		else
			cout << "Channel-up error!" << endl;
	}

	//������ ������ŭ ä���� �ø��� �ʹ�.
	void channelUp(int delta)
	{
		if (on&& channel + delta <= 120)//�Լ��� �̸��� ���� �̸������� �����ε� ����
			channel += delta;

		else
			cout << "Channel-up error!" << endl;
	}
	//ä���� ��ĭ�� ������.
	void channelDown()
	{
		if (on&& channel > 1)
			channel--;
	}

	//ä�ΰ��� ��ĭ�� �Ʒ��� �����Ű�� �Լ�
	void channelDownBy2()
	{
		if (on&& channel >= 3) //channel-2>=1�̹Ƿ�
			channel -= 2;
		else
			cout << "Channel-down error!" << endl;
	}

	//������ ������ŭ ä���� ������ �ʹ�.
	void channelDown(int delta)
	{
		if (on&& channel - delta >= 1)
			channel -= delta;
		else
			cout << "Channel-down error!" << endl;
	}
	//������ �ø���.
	void volumeUp()
	{
		if (on&& volumeLevel < 7)
			volumeLevel++;
	}
	//������ ������.
	void volumeDown()
	{
		if (on&& volumeLevel > 1)
			volumeLevel--;
	}
};

int main()
{

	//�ι�° ����
	TV tv1;
	tv1.turnOn();
	tv1.setChannel(30);
	tv1.setVolume(3);
	//�� ���ư����� Ȯ��
	cout << "<���� 2>" << endl << endl;
	cout << "tv1's channel is " << tv1.channel << " and volume level is " << tv1.volumeLevel << endl;
	tv1.channelUpBy2();
	cout << "tv1's channel is " << tv1.channel << endl;
	tv1.channelUp(40);
	cout << "tv1's channel is " << tv1.channel << endl;
	tv1.channelUp(100); //�Ϻη� ������ �߻����Ѻ���.
	cout << "tv1's channel is " << tv1.channel << endl << endl;
	tv1.channelDown();
	cout << "tv1's channel is " << tv1.channel << endl;
	tv1.channelDownBy2();
	cout << "tv1's channel is " << tv1.channel << endl;
	tv1.channelDown(80);
	cout << "tv1's channel is " << tv1.channel << endl << endl;

	//���� ���ο� ������ �Լ��� ����Ͽ� ��ü�� ����� ����.
	TV tv1_1(2, 3);
	//���� ���� �����ڴ� �ʱⰪ�� true, �ڵ����� Ƽ�� �����Ƿ� �Լ� ȣ���� ���ص� �ȴ�.
	cout << "tv1_1's channel is " << tv1_1.channel << endl;
	tv1_1.channelUp(10);
	cout << "tv1_1's channel is " << tv1_1.channel << endl;
	tv1_1.turnOff();
	//���� Ƽ�� ���ٸ� �ƹ� ����� �ٲ��� �ʾƾ� �Ѵ�.
	tv1_1.channelUp();
	cout << "tv1_1's channel is " << tv1_1.channel << endl << endl;

	//�μ����� �����ڸ� �����غ���.
	TV tv2;
	tv2.turnOn();
	tv2.channelUp();
	tv2.channelUp();
	tv2.volumeUp();


	cout << "tv2's channel is " << tv2.channel << " and volume level is " << tv2.volumeLevel << endl;
}
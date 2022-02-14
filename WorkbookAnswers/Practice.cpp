#include <iostream>
using namespace std;

class Circle
{
public:
	double radius;

	Circle() {
		radius = 1;
	}

	Circle(double newRadius)
	{
		radius = newRadius;
	}

	double getArea()
	{
		return radius * radius * 3.14159;
	}
	//원의 둘레를 구하는 함수
	double getPerimeter()
	{
		return 2 * 3.14159 * radius;
	}
	//두 객체의 반지름을 더하여 반환하는 함수
	double plusRadius(Circle newCircle)
	{
		return newCircle.radius + radius;
	}
	//두 객체의 넓이를 더하여 반환하는 함수
	double plusArea(Circle newCircle)
	{
		return getArea() + newCircle.getArea();
	}
	//두 객체의 둘레를 더하여 반환하는 함수
	double plusPerimeter(Circle newCircle)
	{
		return getPerimeter() + newCircle.getPerimeter();
	}

};

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

	//생성자 추가
	TV(int newChannel, int newVolumeLevel)
	{
		channel = newChannel;
		volumeLevel = newVolumeLevel;
		on = true;
	}
	//TV를 킨다.
	void turnOn()
	{
		on = true;
	}
	//TV를 끈다.
	void turnOff()
	{
		on = false;
	}
	//채널을 설정한다.
	void setChannel(int newChannel)
	{
		if (on&&newChannel >= 1 && newChannel <= 120)
			channel = newChannel;
	}
	//볼륨도 설정한다.
	void setVolume(int newVolumeLevel)
	{
		if (on&&newVolumeLevel >= 1 && newVolumeLevel <= 7)
			volumeLevel = newVolumeLevel;
	}
	//채널을 한칸씩 올린다.
	void channelUp()
	{
		if (on&& channel < 120)
			channel++;
	}

	//채널값을 두칸 위로 변경시키는 함수
	void channelUpBy2()
	{
		if (on&& channel <= 118) //channel+2<=120이므로
			channel += 2;
		else
			cout << "Channel-up error!" << endl;
	}

	//임의의 개수만큼 채널을 올리고 싶다.
	void channelUp(int delta)
	{
		if (on&& channel + delta <= 120)//함수의 이름이 같은 이름이지만 오버로딩 가능
			channel += delta;

		else
			cout << "Channel-up error!" << endl;
	}
	//채널을 한칸씩 내린다.
	void channelDown()
	{
		if (on&& channel > 1)
			channel--;
	}

	//채널값을 두칸씩 아래로 변경시키는 함수
	void channelDownBy2()
	{
		if (on&& channel >= 3) //channel-2>=1이므로
			channel -= 2;
		else
			cout << "Channel-down error!" << endl;
	}

	//임의의 개수만큼 채널을 내리고 싶다.
	void channelDown(int delta)
	{
		if (on&& channel - delta >= 1)
			channel -= delta;
		else
			cout << "Channel-down error!" << endl;
	}
	//볼륨을 올린다.
	void volumeUp()
	{
		if (on&& volumeLevel < 7)
			volumeLevel++;
	}
	//볼륨을 내린다.
	void volumeDown()
	{
		if (on&& volumeLevel > 1)
			volumeLevel--;
	}
};

int main()
{
	//첫번째 문제
	Circle circle1(1.0);
	Circle circle2(25);
	Circle circle3(125);
	cout << "<문제 1>" << endl << endl;
	cout << "The area of the circle of radius " << circle1.radius << " is " << circle1.getArea() << endl;
	cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;
	cout << "The area of the circle of radius " << circle3.radius << " is " << circle3.getArea() << endl;

	circle2.radius = 100; //객체의 반지름을 변경해보자.
	cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

	//추가 코드
	cout << "------------------------------------------------------------" << endl;
	cout << "circle1.plusRadius(circle2) = " << circle1.plusRadius(circle2) << endl;
	cout << "circle2.plusArea(circle3) = " << circle2.plusArea(circle3) << endl;
	cout << "circle2.plusRerimeter(circle3) = " << circle2.plusPerimeter(circle3) << endl;
	//저 값이 제대로 나온것인지 확인
	cout << "여기서, circle2.getPerimeter() = " << circle2.getPerimeter() << ", circle3.getPerimeter() = " <<
		circle3.getPerimeter() << endl << endl;


	//두번째 문제
	TV tv1;
	tv1.turnOn();
	tv1.setChannel(30);
	tv1.setVolume(3);
	//잘 돌아가는지 확인
	cout << "<문제 2>" << endl << endl;
	cout << "tv1's channel is " << tv1.channel << " and volume level is " << tv1.volumeLevel << endl;
	tv1.channelUpBy2();
	cout << "tv1's channel is " << tv1.channel << endl;
	tv1.channelUp(40);
	cout << "tv1's channel is " << tv1.channel << endl;
	tv1.channelUp(100); //일부러 오류를 발생시켜보자.
	cout << "tv1's channel is " << tv1.channel << endl << endl;
	tv1.channelDown();
	cout << "tv1's channel is " << tv1.channel << endl;
	tv1.channelDownBy2();
	cout << "tv1's channel is " << tv1.channel << endl;
	tv1.channelDown(80);
	cout << "tv1's channel is " << tv1.channel << endl << endl;

	//이제 새로운 생성자 함수를 사용하여 객체를 만들어 보자.
	TV tv1_1(2, 3);
	//새로 만든 생성자는 초기값을 true, 자동으로 티비를 켰으므로 함수 호출을 안해도 된다.
	cout << "tv1_1's channel is " << tv1_1.channel << endl;
	tv1_1.channelUp(10);
	cout << "tv1_1's channel is " << tv1_1.channel << endl;
	tv1_1.turnOff();
	//만약 티비를 껐다면 아무 결과도 바뀌지 않아야 한다.
	tv1_1.channelUp();
	cout << "tv1_1's channel is " << tv1_1.channel << endl << endl;

	//인수없는 생성자를 시험해보자.
	TV tv2;
	tv2.turnOn();
	tv2.channelUp();
	tv2.channelUp();
	tv2.volumeUp();


	cout << "tv2's channel is " << tv2.channel << " and volume level is " << tv2.volumeLevel << endl;


}
#pragma once
#include "schedule.cpp"
#include <iostream>

class SmsSender {
public:
	virtual void send(Schedule* schedule) {
		//send message to PhoneNumber
	}
};

class TestableSmsSender : public SmsSender {
public:
	void send(Schedule* schedule) override {
		std::cout << "테스트용SmsSender class의send메서드실행됨\n";
		sendMethodIsCalled = true;
	}
	bool isSendMethodIsCalled() {
		return sendMethodIsCalled;
	}
private:
	bool sendMethodIsCalled;
};
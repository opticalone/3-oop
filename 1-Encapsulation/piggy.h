#pragma once
class Piggy
{
private:
	float currentBal = 0;
public:
	void deposit(float DepAmount);
	float withdraw();
	float balance() const;
};